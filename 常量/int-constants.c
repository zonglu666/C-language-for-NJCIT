#include <stdio.h>

/**
 * 常量是固定值，在程序执行期间不会改变。这些固定的值，又叫做字面量。
 * 常量可以是任何的基本数据类型，比如整数常量、浮点常量、字符常量，或字符串字面值，也有枚举常量。
 * 常量就像是常规的变量，只不过常量的值在定义后不能进行修改。
 * 
 * 整数常量可以是十进制、八进制或十六进制的常量。
 * 前缀指定基数：0x 或 0X 表示十六进制，0 表示八进制，不带前缀则默认表示十进制。
 * 整数常量也可以带一个后缀，后缀是 U 和 L 的组合，U 表示无符号整数（unsigned），L 表示长整数（long）。
 * 
 * 212（合法的）
 * 215u（合法的）
 * 0xFeeL（合法的）
 * 078（非法的，8不是八进制的数）
 * 032UU（非法的，不能重复后缀）
 */

#include <stdio.h>
int main()
{
    int year = 2020;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 != 0)
        printf("%d is not a leap year.\n", year);
    return 0;
}