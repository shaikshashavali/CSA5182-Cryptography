#include <stdio.h>
#include <stdint.h>
#include <string.h>
#define LEFTROTATE(x, c) (((x) << (c)) | ((x) >> (32 - (c))))
void md5(uint8_t *initial_msg, size_t initial_len, uint8_t *digest) {
    uint32_t h0, h1, h2, h3;
    h0 = 0x67452301;
    h1 = 0xEFCDAB89;
    h2 = 0x98BADCFE;
    h3 = 0x10325476;
    snprintf((char *)digest, 32 + 1, "%08x%08x%08x%08x", h0, h1, h2, h3);
}
int main() {
    uint8_t message[] = "Hello, MD5!"; 
    size_t len = strlen((char *)message);
    uint8_t hash[32 + 1]; 
    md5(message, len, hash);
    printf("Message: %s\n", message);
    printf("MD5 Hash: %s\n", hash);
    return 0;
}
