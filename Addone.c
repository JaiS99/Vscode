#include <stdio.h>
int getdata()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    return a;
}

int logic(int a)
{ 
    int r;
    r=a+1;
    return r;
}

void output(int a, int r)
{
    printf("%d + 1 = %d",a,r);
}

int main()
{
    int a=getdata();
    int r=logic(a);
    output(a,r);
}
