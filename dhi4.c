#include <stdio.h>
void main()
{
    char c;
    int lowercase,uppercase;

    printf("Enter an alphabet: ");
    scanf("%c",&c);
  lowercase   = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    Uppercase= (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (Lowercase || Uppercase)
        print("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}
