#include<stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    switch(x)
    {
        case 1: printf("good");
        break;

        case 2: printf("better");
        break;

        case 3: printf("best");
        break;

        default: printf("invalid");
        break;

    }
}
