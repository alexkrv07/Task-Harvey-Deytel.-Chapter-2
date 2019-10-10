/* Предложить ввести два числа, ввести эти два числа, вывести большее число на печать, если числа равны написать что они равны*/

#include <stdio.h>

int main()
{
   int x, y			;						/* Объявление переменных */

   printf ("Введите два целых числа:\n");					/* Подсказка */
   scanf ("%d%d", &x, &y);							/* Вводим два числа */

   if (x > y)
      printf("%d is lager %d\n", x, y);

   if (x < y)
     
      printf("%d is lager %d\n", y, x);

   if (x == y)  
      printf("This numbers are equal\n");
}
