#include <stdio.h>
#include <stdlib.h>


//HW - 5

/*
int main()
{
    float x,y,i;
    printf("input x - ");
    scanf("%f",&x);
    printf("input y - ");
    scanf("%f",&y);
    printf("Oper.:\n1 = (+)\n2 = (-)\n3 = (*)\n4 = (:)\n");
    scanf("%f",&i);

    if(i == 1)
    {
       printf("%g + %g = %g",x,y,x+y);// g - найкоротше можливе значення (тільуи на вивід)
    }

    if(i == 2)
    {
     printf("%g - %g = %g",x,y,x-y);
    }

    if(i == 3)
    {
      printf("%g * %g = %g",x,y,x*y);
    }

    if(i == 4)
    {
      printf("%g / %g = %g",x,y,x/y);
    }

    return 0;
}
*/


////HW - 6

void proc(int x)
{
    if(x < 10)
    {
      printf("x = %d\n",x);
    }
    else
    {
        printf("error\n");
    }
}
int fun(int a, int b)
{
    if(a > b)
    {
     return 1;
    }
    else
    {
        return 0;
    }
}


int main()
{
    system("color 2");
    system("chcp 1251");
    int res;
    res = fun(40,30);


    proc(5);
    proc(15);
    printf("res = %d\n",res);
    proc(res);


    return 0;
}


/*
void proc(int x)
{
    if(x < 10)
    {
        printf("x = %d\n",x);
    }
    else
    {
        printf("error\n");
    }


    //if(x < 10)
   //printf("x = %d\n",x);

    //else
    //printf("error\n");

}

int comp(int a, int b)
{
    if(a > b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    system("color 2");
    system("chcp 1251");

    int ret;
    ret = comp(1, 2);

    proc(5);
    proc(15);

    printf("%d",ret);

    return 0;
}
*/


//HW - 7

/*
int main()
{
system("color 2");
system("chcp 1251");

int arr[10];

int i;
for(i=0; i<10; i++)
{
    if(i < 5)
    {
    arr[i] = 7;
    printf("[%d] = [%d]\n",i,arr[i]);
    }

    else
    {
        arr[i] = i*i;
        printf("[%d] = [%d]\n",i,arr[i]);
    }

}



return 0;
}
*/



/*
int main()
{
system("color 2");
system("chcp 1251");

int arr[10];

int i;
for(i=0; i<4; i++)
{
  arr[i] = 7;
  printf("[%d] = [%d]\n",i,arr[i]);
}


int j;
for(j=4; j<9; j++)
{
  arr[j] = j*j;
  printf("[%d] = [%d]\n",j,arr[j]);
}

return 0;
}
*/



/*
int main()
{
    system("color 2");
    system("chcp 1251");

    int arr[10];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;

    int a = 0;
    while(a<4)
    {
        printf("[%d] = [%d]\n",a,arr[a]);
        a++;
    }

    int i = 4;
    while(i<10)
    {
        if(i < 6)
        {
        arr[i] = 7;
        printf("[%d] = [%d]\n",i,arr[i]);
        }

        else
        {
         arr[i] = i*i;
         printf("[%d] = [%d]\n",i,arr[i]);
        }

        i++;
    }




    return 0;
}
*/



/*
int main()
{
    system("color 2");
    system("chcp 1251");

    int arr[10];
    arr[0] = 10;
    arr[1] = 9;
    arr[2] = 8;

    int i = 0;
    while(i < 3)
    {
        printf("[%d] = [%d]\n",i,arr[i]);
        i++;
    }

    int j = 3;
    while(j < 9)
    {
        if(j < 4)
        {
            arr[j] = 7;
            printf("[%d] = [%d]\n",j,arr[j]);
        }
        else
        {
          arr[j] = j*j;
          printf("[%d] = [%d]\n",j,arr[j]);
        }


        j++;
    }


    return 0;
}

*/
