#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a any +ve or -ve number: ");
    scanf("%d",&x);
    switch(x>=0)
    {
       case 1: printf("-%d",x);
                break;
       case 0: printf("%d",-1*x);

    }
    return 0;
}
