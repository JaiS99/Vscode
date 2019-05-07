Skip to content
Why GitHub? 
Enterprise
Explore 
Marketplace
Pricing 
Search

Sign in
Sign up
0 0 0 darshanshah262/skull1
 Code  Issues 0  Pull requests 0  Projects 0  Insights
Join GitHub today
GitHub is home to over 36 million developers working together to host and review code, manage projects, and build software together.

skull1/compare3
@darshanshah262 darshanshah262 Update compare3
14a8e1f 5 hours ago
43 lines (37 sloc)  482 Bytes
  
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


© 2019 GitHub, Inc.
Terms
Privacy
Security
Status
Help
Contact GitHub
Pricing
API
Training
Blog
About
