//02.  Write a program to find if a triangle is scalene.
#include <stdio.h>
int mian()
{
    int a , b, c ;
    a=input();
    b=input();
    c=input();
    int isscalene=ckeck_scalene(a,b,c);
    output(a,b,c,isscalene);
    return 0;
}
int input()
{
    int x;
    printf("enter the side of triangle\n");
    scanf("%d",&x);
    return x;

}
int check_scalene(int a, int b, int c)
{
    if (a!=b && b!=c && a!=c)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}


void output( int a,int b, int c ,int isscalene)
{
    if (isscalene)
    {
        printf("the triangle is scalene .\n");

    }else 
    {
        printf("the triangle is not scalene .\n");
    }
}
