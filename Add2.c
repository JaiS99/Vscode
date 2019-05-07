#include<stdio.h>
int data()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    return a;
}
int add(int a, int b)
{
    int c;
    c=a+b;
    return c;

}
int op(int c)
{
    printf("the sum is %d",c);
}
int main()
{
    int a,b,c;
   a= data();
   b= data();
   c= add(a,b);
    op(c);
    return 0;
}
