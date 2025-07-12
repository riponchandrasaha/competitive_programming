#include <stdio.h>

int main() {
    char s[10001];
    scanf("%s", s);
    int fre[26] = {0};

    for(int i=0; s[i] !='\0';i++)
    {
        int val = s[i] - 'a';
        fre[val]++;
    }

    for(int i=0;i<26;i++)
    {
        if(fre[i] > 0)
        {
            printf("%c - %d\n", i+'a',fre[i]);
        }
    }
    return 0;
}
