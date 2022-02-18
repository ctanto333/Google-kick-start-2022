#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T;
    int N;
    int M;
    int *chocolates;
    int sum;
    int balance;

    scanf("%d", &T);
    for(int x=1; x<=T; x++)
    {
        sum = 0;
        balance = 0;

        scanf("%d%d", &N, &M);

        for(int y=0; y<N; y++)
        {
            if(sum == 0)
            {
                chocolates = (int*)malloc(N*sizeof(int));
            }

            scanf("%d", &chocolates[y]);
            sum = sum + chocolates[y];
        }


        balance = sum % M;
        printf("Case #%d: %d\n", x, balance);

    }
}
