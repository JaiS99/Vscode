#include<stdio.h>
int get()
{
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    return a;
}
int logic(int a,int b, int c)
{
    if(a>c && a>b)
    {
     return a;
    }

    if(b>a && b>c)
    {
       return b;
    }

    if(c>a && c>b)
    {
    return c;
    }
43 lines (37 sloc)  482 Bytes
  
}
void output(int d)
{
 printf("The greatest of three numbers is %d",d);
}
int main()
{
    int a,b,c,d;
    a=get();
    b=get();
    c=get();
    d=logic(a,b,c);
    output(d);
    return 0;
}

