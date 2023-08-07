//input a ch and print if its a vowel or not using switch 
#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'A':
    case 'a':
        printf("Vowel");
        break;
    case 'E':
    case 'e':
        printf("Vowel");
        break;
    case 'I':
    case 'i':
        printf("Vowel");
        break;
    case 'O':
    case 'o':
        printf("Vowel");
        break;
    case 'U':
    case 'u':
        printf("Vowel");
        break;
    default:
        printf("Consonant");
        break;
    }
    return 0;
}
