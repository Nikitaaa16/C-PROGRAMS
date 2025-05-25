#include <stdio.h>

// Function to remove newline character if present
void removeNewline(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }
}

int main() {
    char str[100];
    int i, j;
    
    // Get user input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    

    // Find string length
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    // Reverse the string using while loop and swapping
    i = 0;
    j = len - 2;
    printf("%d",j);
    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    // Check if palindrome based on i and j condition
    if (i > j) {
        printf("The entered string is a palindrome.\n");
    } else {
        printf("The entered string is NOT a palindrome.\n");
    }

    // Print reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}