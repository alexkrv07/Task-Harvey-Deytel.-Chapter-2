/* Вывести на печать числа от одно до четырех в одну строку без спецификатора, со спецификатором, четырьмя операторами printf */

/* Вариант №1 */

#include <stdio.h>

int main()
{
   printf("1, 2, 3, 4\n");
}

/* Вариант №2 */

#include <stdio.h>

int main()
{
   int x = 1;
   int y = 2;
   int z = 3;
   int a = 4;

   printf("%d, %d, %d, %d\n", x,y,z,a);
}

/* Вариант №3 */

#include <stdio.h>

int main()
{
   printf("1, ");
   printf("2, ");
   printf("3, ");
   printf("4\n");
}
