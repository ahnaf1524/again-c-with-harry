#include <stdio.h>

int main()
{
    // Declare a buffer to hold user input
    char buffer[10];

    /*
    // Using gets() (Unsafe and Deprecated)
    // The gets() function reads a line of input from stdin and stores it in the buffer.
    // However, it does NOT check the size of the buffer, leading to buffer overflows
    // if the input is longer than the allocated space. This is dangerous because:
    // 1. It can overwrite adjacent memory, causing undefined behavior.
    // 2. It opens security vulnerabilities, such as stack corruption.
    // 3. It has been officially removed in the C11 standard.
    // For these reasons, using gets() is strongly discouraged.
    // Example: gets(buffer); // Avoid using this
    */

    /*
    // Using fgets() (Safe)
    // The fgets() function is a safer alternative to gets() for reading strings.
    // Key Advantages of fgets():
    // 1. Prevents Buffer Overflow:
    //    - Allows specifying the maximum number of characters to read.
    //    - Syntax: fgets(buffer, size, stdin);
    //    - It ensures the input does not exceed the buffer size.
    // 2. Handles Newline Characters:
    //    - If there is space, fgets() includes the newline character '\n' in the buffer.
    //    - If the input exceeds the size limit, fgets() truncates it and adds '\0'.
    // 3. Versatile Usage:
    //    - It can read input from files as well as stdin.
    //    - Example: fgets(buffer, sizeof(buffer), stdin);
    */

    printf("Enter input: "); // Prompt the user for input

    // Use fgets() to read user input safely
    if (fgets(buffer, sizeof(buffer), stdin) != NULL)
    {
        /*
        // fgets() returns NULL if an error occurs or end-of-file (EOF) is reached.
        // If successful, it stores the input (including the newline character if space permits)
        // in the buffer and appends a null terminator '\0' to indicate the end of the string.
        */

        printf("You entered: %s", buffer); // Print the entered input
        /*
        // Note:
        // If you want to remove the newline character ('\n') added by fgets(),
        // you can manually check and replace it with a null terminator ('\0').
        */
    }

    return 0;
}
