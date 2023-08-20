#include<stdio.h>
int fac(int a)
{
    int re = 1;
    for (int i = 1; i <= a; i++)
    {
        re *= i;
    }
    return re;
}
int main()
{
    int N =0;
    int result = 0;
    scanf("%d",&N);
    for (int i = 1; i <= N; i++)
    {
        result += fac(i);
    }
    printf("%d",result);
    return 0;
    
}