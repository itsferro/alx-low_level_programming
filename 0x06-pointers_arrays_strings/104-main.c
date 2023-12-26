#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[] = "This is a string!\0And this is the rest of the #buffer :)\1\2\3\4\5\6\7#cisfun\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34\x56#pointersarefun #infernumisfun\n";
    char buffer1[] = "\0";
    char buffer2[] = "abcdefghij";
    char buffer3[] = "abc";
    char buffer4[] = "abcdefghij";

    printf("%s\n", buffer);
    printf("---------------------------------\n");
    print_buffer(buffer, sizeof(buffer));
    printf("---------------------------------\n");
    print_buffer(buffer, 0);
    printf("---------------------------------\n");
    print_buffer(buffer, -1);
    printf("---------------------------------\n");
    print_buffer(buffer1, sizeof(buffer1));
    printf("---------------------------------\n");
    print_buffer(buffer2, sizeof(buffer2));
    printf("---------------------------------\n");
    print_buffer(buffer3, sizeof(buffer3));
    printf("---------------------------------\n");
    print_buffer(buffer4, sizeof(buffer4));
    printf("---------------------------------\n");
    printf("---------------------------------\n");
    printf("---------------------------------\n");
    printf("---------------------------------\n");
    return (0);
}
