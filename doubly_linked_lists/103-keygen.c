#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
/**
* simple_mix - simple non-cryptographic mixing function
* @data: input buffer
* @len: length of buffer
*
* Return: 64-bit accumulator
*/
static uint64_t simple_mix(const unsigned char *data, size_t len)
{
uint64_t acc = 0x9E3779B97F4A7C15ULL; /* golden ratio */
uint64_t prime = 0xC2B2AE3D27D4EB4FULL;
size_t i;
for (i = 0; i < len; i++)
{
acc ^= (uint64_t)data[i] + (acc << 7) + (acc >> 3);
acc *= prime;
acc ^= (acc >> 33);
}
/* final avalanche */
acc ^= acc >> 29;
acc *= 0x2545F4914F6CDD1DULL;
acc ^= acc >> 32;
return acc;
}
/**
* format_key - render a key in a friendly segments (e.g., XXXXX-XXXXX)
* @mix: 64-bit value to encode
* @out: buffer for output (must be >= 32 bytes)
*
* Return: pointer to out
*/
static char *format_key(uint64_t mix, char *out)
{
const char alphabet[] = "ABCDEFGHJKLMNPQRSTUVWXYZ23456789"; /* no confusing chars */
const size_t N = sizeof(alphabet) - 1;
int i, pos = 0;
/* 5x5 segments: XXXXX-XXXXX */
for (i = 0; i < 10; i++)
{
int j;
for (j = 0; j < 5; j++)
{
/* rotate and map to alphabet */
mix ^= (mix << 13) ^ (mix >> 7);
out[pos++] = alphabet[(mix + j + i) % N];
}
if (i != 9)
out[pos++] = '-';
}
out[pos] = '\0';
return out;
}
/**
* main - entry point
* @argc: argument count
* @argv: argument vector
*
* Return: 0 on success, non-zero on error
*/
int main(int argc, char **argv)
{
const char *user;
size_t len;
uint64_t mix;
char key[64];
if (argc != 2)
{
fprintf(stderr, "Usage: %s username\n", argv[0]);
return (1);
}
user = argv[1];
len = strlen(user);
if (len == 0)
{
fprintf(stderr, "Error: username must be non-empty.\n");
return (2);
}
/* optional normalization: trim spaces, enforce ASCII, etc. */
mix = simple_mix((const unsigned char *)user, len);
/* add sanity guards derived from username properties */
mix ^= (uint64_t)len * 0x1000003ULL;
if (user[0] != '\0')
mix ^= (uint64_t)(unsigned char)user[0] << 32;
if (user[len - 1] != '\0')
mix ^= (uint64_t)(unsigned char)user[len - 1] << 16;
format_key(mix, key);
printf("%s\n", key);
return (0);
}