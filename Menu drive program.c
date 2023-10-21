#include<stdio.h>
int main()
{
    while(1)
    {
        int x, a, b;
    printf("\n 1.Addition");
    printf("\n 2.subtraction");
    printf("\n 3.multiplication");
    printf("\n 4.division");
    printf("\nEnter your choice: ");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        printf("Enter a two number: ");
        scanf("%d %d",&a, &b);
        printf("Sum is %d",a+b);
        break;

    case 2:
        printf("Enter a two number: ");
        scanf("%d %d",&a, &b);
        printf("sub is %d",a-b);
        break;

    case 3:
        printf("Enter a two number: ");
        scanf("%d %d",&a, &b);
        printf("mul is %d",a*b);
        break;

    case 4:
        printf("Enter a two number: ");
        scanf("%d %d",&a, &b);
        printf("div is %d",a/b);
        break;

    case 5:
        break;

    }
    if(x==5)
        break;
    } //end of while;
    return 0;

}
