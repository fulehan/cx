/* #include<stdio.h>
int main()
{
    int N,M;
    int i = 0;
    scanf("%d %d",&N,&M);
    float P[N];
    for(i=0;i<N;i++)
    {
        scanf("%f",&P[i]);
    }
    for(i=0;i<N;i++)
    {
        if(P[i]<M)
        {
            printf("On Sale! %.1f\n",P[i]);
        }

    }
    
    return 0;
} */
//此题中第一个for语句用来读取一段数据并存储
#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++) {
        double price;
        scanf("%lf", &price);

        if (price < M) {
            printf("On Sale! %.1lf\n", price);
        }
    }

    return 0;
}