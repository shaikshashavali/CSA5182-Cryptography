#include <stdio.h>
#include <stdint.h>
#include "blowfish.h"

int main() {
    uint32_t P[18] = { /* ... */ };  
    uint32_t S[4][256] = { /* ... */ }; 
    char key[] = "MySecret";
    BF_key_setup((uint32_t*)key, P, S);

    uint32_t data[2] = {0x01234567, 0x89ABCDEF};

    BF_encrypt(data, P, S);

    printf("Encrypted: %08X %08X\n", data[0], data[1]);

    BF_decrypt(data, P, S);

    printf("Decrypted: %08X %08X\n", data[0], data[1]);

    return 0;
}
