/* Ввести два числа, определить кратно ли первое второму и вывести результат */


#include <stdio.h>

int main()
{
   int a, b, rest;     			/*Инициализация переменных*/
   
   printf("Введите два целых числа: ");
   scanf("%d%d", &a, &b);
   rest = a % b;

   if (rest == 0)
      printf("Число %d кратно числу %d\n", a, b);

   if (rest != 0)
      printf("Число %d не кратно числу %d\n", a, b);
}