/**
 * 编译过程
 * 
 * 1.预编译(编译预处理) 生成预处理文件
 * gcc -E hello.c -o hello.i
 * 
 * 2.编译 编译器gcc把预处理后的文件进行语法分析、语义分析以及优化后生成汇编代码文件
 * gcc -S hello.i -o hello.s
 * 
 * 3.汇编 将汇编文件编译成中间目标文件
 * as hello.s -o hello.o
 * 
 * 4.链接(生成可执行文件) 将中间目标文件与需要的附加目标文件(如静态链接库、动态链接库)链接起来，生成可执行文件
 * gcc hello.c -o hello   #
 * 
 * 5.执行可执行文件
 * ./hello
 */
#include <stdio.h>
int main()
{
    printf("Hello,world!\n");
    return 0;
}