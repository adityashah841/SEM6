#include <stdio.h>
#include <string.h>

void print_secret()
{
    printf("Secret message: You have successfully overflowed the buffer!\n");
}

int main()
{
    char buffer[10];
    printf("Enter your name: ");
    scanf("%s", buffer);
    printf("Hello, %s!\n", buffer);
    return 0;
}
