#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number.: ");
    scanf("%d",&x);
    switch(x%2==0)
    {
        case 1:printf(" Upper nearest odd is %d",1+x);
                break;
        case 0:printf("%d",x);
    }
    return 0;
}
