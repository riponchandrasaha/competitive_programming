#include <stdio.h>
#include <stdbool.h>
int main() {
    int r,c;
    scanf("%d %d", &r,&c);
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
bool is_diagonal = true;
if(r==c)

{
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        //if(i!=j)
        if(i+j !=r-1)
        {
            if(a[i][j] != 0)
            {
                is_diagonal = false;
                //printf("This is not primary diagonal\n");
                printf("This is not secondary diagonal\n");

            }
        }
    }
}
if(is_diagonal==true)
{
    //printf("This primary diagonal matrix");
    printf("This secondary diagonal matrix");

}
   }
    return 0;
}
