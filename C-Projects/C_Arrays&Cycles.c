#include <stdlib.h>
#include <stdio.h>


void hello()
{
    printf("\n����� ���!\n\n");
}

int main()
{
    system("color 2");
    system("chcp 1251");

// �����, �� ���� ������ ������ ����, �� ����� ���������
//1 2 3 4 5 6 7 8 9 10 - �-��� ������
//0 1 2 3 4 5 6 7 8 9 - ������ ������
    int mas[10]; // int - ��� ����� ������ � �����, ����� ��� ������(������ 10)
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

    //printf("%d\n",mas[10]); //�������



    int a;
    for(a = 0; a < 9; a++)
    {
        printf("%d",mas[a]);
    }



    int b;
    hello();


    for(b=10; b>=1; b=b-1)
    {
       printf("[%d] -  ����� ���!\n",b);
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


