/*Напишите программу, которая считывает 5 целых чисел, а затем определяет наибольшее и наименьшее из них и выводит на печать результат*/

#include <stdio.h>

int main()
{
   int a, b, c, d, e, small, large; 							/*Обьявляем переменные*/

   printf("Введите пять целых чисел:");
   scanf("%d%d%d%d%d", &a,&b, &c, &d, &e);
   small = a;										/*Присваиваем минимальное значение а*/
   large = a;										/*Присваиваем максимальное значение b*/

   if (b < small) 									/*Ищем минимальное значение*/
      small = b;
   if (c < small)
      small = c;
   if (d < small)
      small = d;
   if (e < small)
      small = e;

   if (b > large) 									/*Ищем максимальное значение*/
      large = b;
   if (c > large)
      large = c;
   if (d > large)
      large = d;
   if (e > large)
      large = e;

   printf("Максимальное значение: %d, минимальное значение: %d\n", large, small); 	/*Выводим на печать результат*/
}
