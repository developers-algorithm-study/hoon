#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char year[2], month[2], day[2];
    char reg[14];
    char gender;

    scanf("%s", reg);

    if(reg[7] == '1' || reg[7] == '2')
    {
        if(reg[7] == '1')
            gender = 'M';
        else
            gender = 'F';

        printf("19%c%c/%c%c/%c%c %c", reg[0], reg[1], reg[2], reg[3], reg[4], reg[5], gender);
    }
    else if(reg[7] == '3' || reg[7] == '4')
    {
        if(reg[7] == '3')
            gender = 'M';
        else
            gender = 'F';

        printf("20%c%c/%c%c/%c%c %c", reg[0], reg[1], reg[2], reg[3], reg[4], reg[5], gender);
    }
    
}