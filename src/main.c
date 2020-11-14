#include <stdio.h>

void other()
{
    printf("Congratulations, you have entered in the secret function!\n");
    fflush(stdout);
}

void input()
{
    char buffer[5];
    printf("Enter some text: ");
    fflush(stdout);
    scanf("%s",buffer);
    printf("You entered: %s\n",buffer);
    fflush(stdout);
}

int main()
{
    printf("%p \n", &other);
    fflush(stdout);
    input();
    printf("Normal output");
    fflush(stdout);
    return 0;
}
