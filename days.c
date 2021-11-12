#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int day;
    printf("День:\n");
    scanf("%i", &day);

    switch (day)
    {
        case 1:
        printf("Понеділок:\n"); break;
         case 2:
        printf("Вівторок:\n"); break;
         case 3:
        printf("Середа:\n"); break;
         case 4:
        printf("Четвер:\n"); break;
         case 5:
        printf("П'ятниця:\n"); break;
         case 6:
        printf("Субота:\n"); break;
         case 7:
        printf("Неділя:\n"); break;
    }
    return 0;
}