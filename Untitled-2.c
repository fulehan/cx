#include<stdio.h>
max(int a,int b)//定义max函数、

{
    if(a>b)
    return a;
    else
    return b;
}
int main()

{
    int a,b=0;
    scanf("%d %d",&a,&b);
    int c = max(a,b);
    printf("%d\n",c);
    return 0;
}