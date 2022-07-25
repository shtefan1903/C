#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    system("color 2");
    system("chcp 1251");
    //оголошення
    int a,b,res,d;
    //внесення данних
    printf("Введіть число a - ");
    scanf("%d",&a);
    printf("\n");
    printf("Оберіть дію(D):\n");
    printf("1-додавання;\n2-віднімання;\n3-множення;\n4-ділення;\n");
    printf("D - ");
    scanf("%d",&d);
    switch(d)
    {
        case 1:
        printf("Ви обрали додавання!\n\n");
        break;

        case 2:
        printf("Ви обрали віднімання!\n\n");
        break;

        case 3:
        printf("Ви обрали множення!\n\n");
        break;

        case 4:
        printf("Ви обрали ділення!\n\n");
        break;

        default:
        printf("Такого не існує!\n");
        return 1;
    }

    printf("Введіть число b - ");
    scanf("%d",&b);
    printf("\n");

    if(d == 1)
    {
        res = a + b;
        printf("%d + %d = %d",a,b,res);
    }

     else if(d == 2)
    {
        res = a - b;
        printf("%d - %d = %d",a,b,res);
    }

     else if(d == 3)
    {
        res = a * b;
        printf("%d * %d = %d",a,b,res);//або
        //printf("%d * %d = %d",a,b,a*b);
    }

      else if(d == 4)
    {
        res = a / b;
        printf("%d : %d = %d",a,b,res);
    }


    return 0;
}

