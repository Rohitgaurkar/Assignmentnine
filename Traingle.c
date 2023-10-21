#include<stdio.h>
int main()
{
    while(1)
    {
        int x, a, b, c;
    printf("\n\n************************\n");
    printf("1. To check isosceles triangle\n");
    printf("2. To check Right angle triangle\n");
    printf("3. To check equilateral Triangle\n");
    printf("4. EXIT");
    printf("\nEnter your choice: ");
    scanf("%d",&x);
    switch(x)
    {
        case 1:printf("Enter a length of 3 side of triangle\n");
        scanf("%d %d %d",&a,&b,&c);
        if(a==b||b==c||c==a)
            printf("isosceles triangle");
        else
            printf("not isosceles triangle");
            break;

        case 2:printf("Enter a length of 3 side of triangle\n");
        scanf("%d %d %d",&a,&b,&c);
        if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
            printf("Right angle triangle");
        else
            printf("not Right angle triangle");
            break;


        case 3:printf("Enter a length of 3 side of triangle\n");
        scanf("%d %d %d",&a,&b,&c);
        if((a==b) && (b==c))
            printf("equilateral triangle");
        else
            printf("not equilateral triangle");
            break;


        case 4:break;


    }
    if(x==4)
        break;
    }
    return 0;


}
