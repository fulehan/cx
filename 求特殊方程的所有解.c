#include <stdio.h>
int P(int a)
{
    return a*a;
}
int main()
{
    int N;
    scanf("%d",&N);
    int sign = 0;
    for (int X=1;X <=N; X++)
    {
        for (int Y = X; Y <= N; Y++)
        {
            if (P(X) + P(Y) == N)
            {
                printf("%d %d\n",X,Y);
                sign = 1;
            }
            
        }
        
    }
    if (!sign)
    {
        printf("No Solution\n");
    }
    

  
    return 0;
}