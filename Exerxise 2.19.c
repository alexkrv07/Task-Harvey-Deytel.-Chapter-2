/*Ввести три числа с клавиатуры, найти их сумму, произведение, среднее, наибольшее и наименьшее и вывести на экран*/

#include <stdio.h>

int main()
{
   int x, y, z, sum, ave, prod, small, large;					/* Объявление переменных */
   

   printf ("Input three different integers:");					/* Подсказка */
   scanf ("%d%d%d", &x, &y, &z);						/* Вводим два числа */
   sum = x + y + z;								/* Вычисляем сумму */
   ave = (x + y + z)/3;								/* Вычисляем среднее */
   prod = x * y * z;								/* Вычисляем произведение */
   small = x;
   large = x;

   if (y < small)								/* Вычисляем наименьшее */  
      small = y;
   if (z < small)
      small = z;

   if (y > large)								/* Вычисляем наибольшее */								
      large = y;
   if (z > large)
      large = z;

   printf("Sum is %d\nAverege is %d\nProduct is %d\nSmallest is %d\nLargest is %d\n", sum, ave, prod, small, large);           /* Печать результатов */
}
