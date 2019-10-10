/* написать программу, считывающую пятизначное число, разделяющее это число на отдельные цифры и выводящее их на печать с интервалом в 3 пробела*/

#include <stdio.h>

int main()
{
   int x, x1, x2, x3, x4, rest;
   printf("Введите пятизначное целое число: ");
   scanf("%d", &x);
   rest = x / 10;
   x1 = x % 10;
   x2 = rest % 10;
   rest = rest / 10;
   x3 = rest % 10;
   rest = rest / 10;
   x4 = rest % 10;
   rest = rest / 10;
   printf("%d%4d%4d%4d%4d\n", rest, x4, x3, x2, x1);
}
