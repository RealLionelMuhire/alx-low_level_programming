#include <stdio.h>

unsigned int simpleHash(char* str) {
    unsigned int hash = 0;
    int i = 0;

    while (str[i] != '\0') {
        hash += str[i];
        hash += (hash << 10);
        hash ^= (hash >> 6);
        i++;
    }

    hash += (hash << 3);
    hash ^= (hash >> 11);
    hash += (hash << 15);

    return hash;
}

int main() {
    char input[] = "Hello, World!";
    unsigned int hashValue = simpleHash(input);

    printf("Hash value: %u\n", hashValue);

    return 0;
}

