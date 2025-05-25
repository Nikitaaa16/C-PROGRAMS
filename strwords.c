#include <stdio.h>

int main() {
    char arr[50];
    int i = 0, c = 0, len = 0;

    printf("Enter a sentence: ");
    fgets(arr, 50, stdin);

    // Manually find the length (instead of using strlen())
    while (arr[len] != '\0') {
        len++;
    }
    
    // Remove trailing newline character if present
    if (arr[len - 1] == '\n') {
        arr[len - 1] = '\0';
        len--;  // Adjust length accordingly
    }

    // Manually check and remove trailing punctuation (if it exists)
    if (arr[len - 1] == '.' || arr[len - 1] == ',' || arr[len - 1] == '!') {
        arr[len - 1] = '\0';
        len--;  // Adjust length again
    }

    puts(arr);  // Display the modified input

    // Count spaces to determine words
    while (arr[i] != '\0') {
        if (arr[i] == ' ')
            c++;
        i++;
    }

    printf("\nThe number of words = %d\n", c + 1);
    return 0;
}