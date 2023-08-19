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
/* scanf 函数可以在 while 循环的条件部分使用，是因为 scanf 函数的返回值在读取成功时会返回成功读取的项目数，如果没有成功读取，则返回值会小于要读取的项目数。在 C 语言中，表达式的值为 0 被视为假，而非零值被视为真。

所以，当您将 scanf 放在 while 循环的条件部分时，您实际上是在检查 scanf 函数的返回值是否为 1，即检查是否成功读取了一个整数。如果成功读取，返回值是 1，条件为真，进入循环体。如果读取失败或者输入结束，返回值是 0，条件为假，退出循环。

在这种用法下，scanf 用作条件检查的主要目的是检查输入的状态，以决定是否应该继续循环。因此，它不仅可以在 while 循环中使用，还可以在其他控制语句中（如 if 语句）进行类似的条件判断。
 */

