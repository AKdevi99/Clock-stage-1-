#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main()
{
    int h,m,s;
    int d=1000;//delay in miliseconds
    printf("enter time:\t");
    scanf("%d %d %d",&h,&m,&s);
    if(h>12 || m>59|| s>59)
    {
        printf("error:\n");
        exit(0);
    }

    while(1)
    {   
        s++;
        if(s>59)
        {
            s=0;
            m++;
        }
        if(m>59)
        {
            m=0;
            h++;
        }
        if(h>23)
        {
            h=1;
        }
        printf("-----Clock------\n");
        printf("%02d-%02d-%02d",h,m,s);
        Sleep(d); //delaying the clock to make it work realistic

        system("cls");
    }
    return 0;
}
