
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
    if(a>c)
    {
        if(a>b)
         return a;
        if(b>a)
         return b;
    }

    if(c>a)
    {
        if(c>b)
         return c;
        if(c<b)
         return b;
    }
}
void output(int ans)
{
printf("The greatest of three numbers is %d",ans);
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
