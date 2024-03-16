//Check an alphabet is vowel or consonant
#include<stdio.h>
int main()
{
    int no_of_tCase;
    char ch;
    scanf("%d", &no_of_tCase);
    for(int i = 1; i <= no_of_tCase; i++)
    {
        scanf(" %c", &ch);
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' ||
                    ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' ||
                    ch == 'O' || ch == 'U')
                printf("Case %d: Vowel\n", i);
            else
                printf("Case %d: Consonant\n", i);
        }
        else
            printf("Case %d: Not an Alphabet\n", i);
    }
    return 0;

}

