#include<stdio.h>
int main()
{
    int N,U,D;
    int i = 0;
    int time = 0;
    scanf("%d %d %d",&N,&U,&D);//D<U N<=100
    while(1)
    {
        time++;
        i += U;
        if(i >= N)
        {
            break;
        }
        i-= D;
    }
    
    printf("%d",time);
    return 0;
}
