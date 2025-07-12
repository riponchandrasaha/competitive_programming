#include <stdio.h>

void odd_even() 
{
    int N;
    scanf("%d", &N); 

    int A[N]; 
    int e= 0, o = 0;

   
    for (int i = 0; i < N; i++)
     {
        scanf("%d", &A[i]);
        if (A[i] % 2 == 0) {
            e++;
        } else {
            o++;
        }
    }

    
    printf("%d %d\n", e, o);
}


int main() {
    odd_even();
    return 0;
}
