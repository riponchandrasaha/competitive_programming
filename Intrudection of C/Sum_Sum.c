#include <stdio.h>

int main() {
    int N, value;
    int pos= 0, neg = 0;

    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%d", &value);

        if(value > 0) {
            pos += value;
        }
        else if(value < 0)
        {
            neg +=value;
        }
    }

    printf("%d %d\n", pos,neg);
    return 0;
}
