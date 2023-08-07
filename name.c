#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    printf("Enter an uppercase alphabet : ");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'A':
        printf("\nanjali\naarav\nana");
        break;
    case 'K':
        printf("\nkashish\nkashvee");
        break;
    case 'S':
        printf("\nshivam\nsachin");
        break;
    default:
        printf("\nNo records exist");
    }
    return 0;
}
