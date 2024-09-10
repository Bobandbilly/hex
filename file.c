#include <stdio.h>
#include <string.h>

void string_to_hex(const char *s, char *hex_output) {
    // Convert the string to a hexadecimal representation
    while (*s) {
        sprintf(hex_output, "%02X ", (unsigned char)*s);
        hex_output += 3; // Move the pointer to the next position in hex_output
        s++;
    }
}

int main() {
    char user_input[256];
    char hex_result[768] = {0}; // Enough to hold the hex representation

    // Get the input string from the user
    printf("Enter a string: ");
    fgets(user_input, sizeof(user_input), stdin);
    
    // Remove the newline character if present
    size_t len = strlen(user_input);
    if (len > 0 && user_input[len-1] == '\n') {
        user_input[len-1] = '\0';
    }

    // Convert the string to hex
    string_to_hex(user_input, hex_result);
    
    // Output the hexadecimal representation
    printf("The hexadecimal representation is: %s\n", hex_result);

    return 0;
}
