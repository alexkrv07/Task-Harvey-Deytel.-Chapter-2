/*Считать целое число и определить четное оно или нечетное, вывести результат на печать*/

#include <stdio.h>

int main()
{
   int a, r;							/*Объявление перемнных*/
   
   printf("Введите целое число:");				/*Подсказка*/
   scanf("%d", &a);						/*Считывание целого числа с клавиатуры*/
   r = a % 2;							/*Определяем остаток по модулю*/

   if (r == 0)							/*Условие если число четное*/
      printf("Вы ввели четное число\n");

   if (r != 0)							/*Условие если число нечетное*/
      printf("Вы ввели нечетное число\n");
}

