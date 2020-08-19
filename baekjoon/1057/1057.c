#include <stdio.h>

int main()
{
    int total;
    int imm, kim;
    int count = 0;

    scanf("%d %d %d", &total, &kim, &imm);

    if(total < kim || total < imm)
    {
        count = -1;
    }
    else
    {
        while (kim != imm)
        {
            kim = (kim + 1) / 2;
            imm = (imm + 1) / 2;
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}