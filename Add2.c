#include<stdio.h>

int Input()
{
    int a;
    scanf("%d",&a);
    return a;
}

int Add(int a, int b)
{
    int c;
    c=a+b;
    return c;

}

int Output(int c)
{
    printf("The sum of both entered Numbers is:\n%d",c);
}

int main()
{
   int a,b,c;
   printf("enter 1st number \n");
   a= Input();
   printf("enter 2nd number \n");
   b= Input();
   
   c= Add(a,b);
   Output(c);
   return 0;
}
