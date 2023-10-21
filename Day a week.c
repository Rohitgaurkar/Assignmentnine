#include<stdio.h>
int main()
{
    while(1)
    {
        int r;
    printf("enter a day number of week: ");
    scanf("%d",&r);
    switch(r)
    {
        case 1: printf("today is Monday So it is work day star\n");
            break;
        case 2: printf("today is Tuesday\n");
            break;

        case 3: printf("today is Wednesday\n");
            break;

        case 4: printf("today is Thursday\n");
            break;

        case 5: printf("today is Friday\n");
            break;

        case 6: printf("today is Saturday So it is relax day of work\n");
            break;

        case 7: printf("today is Sunday its weekend day\n");
            break;

        default:printf("It is a only 7 days in a week");

    }


    }// end while loop//
    return 0;


}
