#include <stdio.h>

int main() {
    int num;
    int count = 0; // 记录当前输入的位置

    // 读取一串未知个数的整数
    while (scanf("%d", &num) == 1) {
        count++; // 增加位置计数器
        if (num == 250) {
            printf("%d\n", count); // 找到 "250"，输出位置并退出循环
            break;
        }
    }

    return 0;
}