//input a character and print if its a vowel or not
#include<stdio.h>
int main()
{  
    char c;
    printf("Enter a character : ");
    scanf("%c",&c);
    if (c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
        printf("It is a vowel ");
    else
        printf("It is a consonant "); 
    return 0;
}
