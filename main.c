#include <stdio.h>

int new_ number(int num1, int num2){
    return num1 * num2;
}
int main()
{
    // @TODO: print a sentence you want.
    printf("Hello, welcome to FDU！\n");
    int a = 10;
    int b = 20;
    int num = new_number(a, b);
    printf("新的数字：%d", num);
    return 0;
}
