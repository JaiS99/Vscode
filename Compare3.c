#include <stdio.h>

void output(int );
void getinput();

void getinput(int *a, int *b, int *c)
{
    printf("Enter the 3 Numbers\n");
    scanf("%d %d %d", a, b, c);

}

int logic (int a, int b,int c)
{
    int d;
     d = (a > b) ? a : b;
     d = (d > c) ? d : c;
     return d;
}
void  output (int a)
{
    printf ("The greatest no is %d",a);
}
int main()
{
    int a,b,c,d;
    getinput(&a,&b,&c);
    d=logic(a,b,c);
    output(d);
}