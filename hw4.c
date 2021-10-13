#include<stdio.h>

int tentotwo(int n)
{
    if (n==1)
    {
    printf("1");
    }

    else
    {
    tentotwo(n/2);
    printf("%d", n%2);
    }
    return 0;
}

int main()
{
    int num; 
    printf("enter a number : ");
    scanf("%d", &num);
    tentotwo(num);

    return 0;
}