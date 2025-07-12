#include <stdio.h>

int main() {
    char S[10001];
    int con=0;
    scanf("%s",&S);
    
    for(int i=0;S[i]!='\0';i++)
    {
     char c=S[i];
     if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
     {
      con++;
     }


    }
    printf("%d\n",con);
    return 0;
}
