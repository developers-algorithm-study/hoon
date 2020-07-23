#include <stdio.h>

int main()
{
    double hp, shield, time, dmg, ignore;

    scanf("%lf %lf %lf", &hp, &shield, &time);
    scanf("%lf", &dmg);   

    ignore = ((1 - (100 - (hp/time/dmg * 100)) / shield) * 100);

    if(ignore < 0)
        printf("O\n");
    else if(ignore > 100)
        printf("X\n");
    else
        printf("%.6lf\n", ignore);
}