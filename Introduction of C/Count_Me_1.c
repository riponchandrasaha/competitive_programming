#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int a[n];
    int c2=0,c3=0;
   
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            c2++;
        }
       else if(a[i]%3==0)
        {
            c3++;
        }
       else if(a[i]%3==0 && a[i]%2==0)
        {
            c2++;
        }
    }
    printf("%d ",c2);
    printf("%d",c3);
   

    return 0;
}
