//#define max =1000
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//大括号外部定义的是全局变量
//全局变量优先级低于局部变量，但是其作用域是整个工程
int all =2023;
enum Sex //SEX这个常量的有限可能常量
    {
       male,
       female,
       secret
    };
int main()
{
    //printf("%d\n",100); //打印字母
    //printf("%d\n",sizeof(char));
    
    //%lf-double
    //%d-整形
    //%f-float


    //求是输出函数
    /* int a = 0;
    int b = 0;
    int sum = 0;
    scanf("%d %d",&a,&b);
    sum = a + b;
    printf("sum = %d\n",sum);  */


    //小尝试=-=
    /* int age = 0;
    scanf("%d",&age);
    if (age >18)
    {
        printf("you have grown up\n");
    }
    else
    {
        printf("you have a wonderful childhood\n");
    }两个整数的和
    //scanf函数
     */



    //求1到n的阶乘的和
    /* 
    int i =0;
    int n =0;
    int m = 1;
    int sum =0;
    printf("please give an number of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        m = m * i;
        sum = sum + m;
    }
    printf("the answer is %d\n",sum);
 */



    //求数组中的最大值
    /* 
    //数组
    int arr[10] = {0};
    //输入
    int i = 0;
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
        
    }
    int max = arr[0];
       //找最大值
    for ( i = 0; i < 10; i++)
    {
        if (arr[i]>max)
        {
            max =arr[i];
            
        }
    }
    //输出
    printf("max is %d",max);
     */


    /* //求十个数字的平均值
    int arr[10] = {0};
    int i =0;
    long sum = 0;
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }    
    long average = 0;
    average = sum/10;
    printf("the average is %ld",average);
 */

    /* //总结：定义数组加上循环输入一般格式为    （n为数组空间）
    int arr[n] = {0};                         //定义数组
    int i = 0;                                //定义变量i
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);                  //循环输入
    } */




    /* int num =20;//这个num仍然是变量
    //常量1 const修饰的常变量
    //然而如果用const
    const int num =10;//此时num，是常变量其本质仍然是变量，const使其增加了常属性     */
    //常量2
    /*  1;//数字常量
    'a';//字符常量
    "abcdef";//字符串常量 */
    //常量3 #define定义的标识符常量 如上
    //define max = 10000 放最前面
    //常量4 枚举常量
   /*  enum Sex //SEX这个常量的有限可能常量
    {
       male = 3,     //同时也可以赋初值
       female,   //枚举变量的值从0开始
       secret
    }; */
    //printf("%d\n",female);   //其结果为1

/* 
    //字符数组-数组是一组同类型的元素
    "hello";//这是一个字符串
    char arr[] = "hello\0";//char定义字符串、隐藏了一个\0

 */
/* 
    while(循环条件)
    {
        //重复过程
    }
    if()
     */
/* 
    int arr[10] ={1,2,3,4,5,6,7,8,9,10};
    int i =0;
    while(i<=9)
    {
        printf("%d\n",arr[i]);
        i++;
    }
    if(i>9)
    {
        printf("over\n");
    } */

//分解一个数的个十百千位用除法并强制换格式即可
 /*    //#include <stdio.h>

int main() {
    int N;

    // 获取输入
    printf("请输入一个三位数：");
    scanf("%d", &N);

    // 判断是否为三位数
    if (N < 100 || N > 999) {
        printf("Invalid Value.\n");
        return 0;
    }

    // 分解百位、十位、个位数字
    int hundreds = N / 100;
    int tens = (N / 10) % 10;
    int ones = N % 10;

    // 判断是否为水仙花数
    if (N == hundreds * hundreds * hundreds + tens * tens * tens + ones * ones * ones) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
} */



    



    //cin 是 C++ 标准库中的输入流对象，用于从标准输入（通常是键盘）读取数据。它是用来接收用户输入的数据，并将这些数据存储到指定的变量中。

//cin >> money >> year >> rate; 是一行代码，表示连续读取三个实数值（通常是浮点数），分别存储到名为 money、year 和 rate 的变量中。这行代码的作用是按照输入顺序依次将输入的数值赋值给这三个变量。
    return 0;
}