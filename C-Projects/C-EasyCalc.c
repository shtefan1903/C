#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    system("color 2");
    system("chcp 1251");
    //����������
    int a,b,res,d;
    //�������� ������
    printf("������ ����� a - ");
    scanf("%d",&a);
    printf("\n");
    printf("������ ��(D):\n");
    printf("1-���������;\n2-��������;\n3-��������;\n4-������;\n");
    printf("D - ");
    scanf("%d",&d);
    switch(d)
    {
        case 1:
        printf("�� ������ ���������!\n\n");
        break;

        case 2:
        printf("�� ������ ��������!\n\n");
        break;

        case 3:
        printf("�� ������ ��������!\n\n");
        break;

        case 4:
        printf("�� ������ ������!\n\n");
        break;

        default:
        printf("������ �� ����!\n");
        return 1;
    }

    printf("������ ����� b - ");
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
        printf("%d * %d = %d",a,b,res);//���
        //printf("%d * %d = %d",a,b,a*b);
    }

      else if(d == 4)
    {
        res = a / b;
        printf("%d : %d = %d",a,b,res);
    }


    return 0;
}

