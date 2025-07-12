#include <stdio.h>
#include <string.h>
int is_palindrome(char str[])
{
    int len = strlen(str);{
    for(int i=0;i<len/2;i++)
    if (str[i] !=str[len - 1-i])
    {
        return 0;
    }
    }
   return 1; 
}




int main() {
    char S[10001];
    scanf("%s", S);
   if(is_palindrome(S) == 1)
   {
    printf("Palindrome");
   }
   else{
    printf("Not Palindrome");
   }
    return 0;
}
