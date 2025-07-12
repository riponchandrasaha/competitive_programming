#include <stdio.h>

int main() {
    int n,m;
    scanf("%d %d", &n,&m);
    int mat[100][100];
    int x;
    int found = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&mat[i][j]);

        }
    }
    scanf("%d",&x);
    for(int i=0;i<n && !found; i++)
    {
        for(int j=0;j<m;j++)
        {
            if (mat[i][j]==x)
            {
                found =1;
                break;
            }
        }
    }

    if(found)
    printf("will not take number\n");
    else
    printf("will take number\n");
    return 0;
}
