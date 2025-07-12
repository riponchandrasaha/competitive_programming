#include <stdio.h>

int main() {
    int t, length;
    char word[100];
    scanf("%d", &t);
    char c;
    scanf("%c",&c);

    while(t--)
    {
        gets(word);
        length = strlen(word);
        if(length > 10)
        {
            printf("%c", word[0]);
            printf("%d", length - 2);
            printf("%c\n", word[length - 1]);

        }
        else
        {
            printf("%s\n", word);
        }
    }
    return 0;
}
