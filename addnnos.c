#include <stdio.h>

void input(int n, int a[]);
int logic(int n, int a[]);
void output(int sum);

int main()
{
    int a[100], n, s;
    printf("Enter the number of elemnts\n");
    scanf("%d", &n);
    input(n, a);
    s = logic(n, a);
    output(s);
}

void input(int n, int a[n])
{
    int i;
    printf("Enter the elements to be added\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

int logic(int n, int a[n])
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}

void output(int sum)
{
    printf("The sum is %d\n", sum);
}