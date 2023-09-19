#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

// Function to generate a random alphanumeric character
char randomAlphanumeric() {
    const char charset[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    int index = rand() % (sizeof(charset) - 1);
    return charset[index];
}
void generateRandomPassword(char *password, int length) {
    for (int i = 0; i < length; i++) {
        password[i] = randomAlphanumeric();
    }
    password[length] = '\0';
}

int main() {
    srand(time(NULL)); // Seed the random number generator with the current time

    int passwordLength = 8; // Change this to match the expected password length

    char password[passwordLength + 1]; // +1 for the null terminator

    generateRandomPassword(password, passwordLength);

    printf("Generated Password: %s\n", password);

    return 0;
}
