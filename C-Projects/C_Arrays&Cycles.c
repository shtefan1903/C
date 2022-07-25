#include <stdlib.h>
#include <stdio.h>


void hello()
{
    printf("\nПривіт світ!\n\n");
}

int main()
{
    system("color 2");
    system("chcp 1251");

// масив, це набір змінних одного типу, які йдуть послідовно
//1 2 3 4 5 6 7 8 9 10 - к-сть ячейок
//0 1 2 3 4 5 6 7 8 9 - номери ячейок
    int mas[10]; // int - тип кожної зманної у масиві, тобто тип ячейки(усього 10)
    mas[0] = 0;
    mas[1] = 9;
    mas[2] = 9;
    mas[3] = 6;
    mas[4] = 5;
    mas[5] = 3;
    mas[6] = 1;
    mas[7] = 8;
    mas[8] = 1;
    mas[9] = 9;

    //printf("%d\n",mas[10]); //помилка



    int a;
    for(a = 0; a < 9; a++)
    {
        printf("%d",mas[a]);
    }



    int b;
    hello();


    for(b=10; b>=1; b=b-1)
    {
       printf("[%d] -  Привіт світ!\n",b);
    }

    printf("\n");

   int i = 0;
   while(i < 9)
   {
       printf("[%d] = [%d]\n",i,mas[i]);
       i++;
   }

    return 0;
}


