#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    char S[100001];  
    

    for (int i=0;i<n;i++) {
        scanf("%s",S);

        int capital=0,small=0,digit=0;

        for (int j=0;S[j]!='\0';j++) {
            char c=S[j]; 
            if (c >= 'A' && c <= 'Z') {
                capital++;
            } else if (c >= 'a' && c <= 'z') {
                small++;
            } else if (c >= '0' && c <= '9') {
                digit++;
            }
        }

        printf("%d %d %d\n", capital, small, digit);
    }

    return 0;
}
