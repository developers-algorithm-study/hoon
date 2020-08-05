#include <stdio.h>

int countZero[41];
int countOne[41];

void dp(){
    countZero[0] = 1;
    countOne[1] = 1;
    
    for(int i=2; i<=40; i++){
        countZero[i] = countZero[i-1] + countZero[i-2];
        countOne[i] = countOne[i-1] + countOne[i-2];
    }
}

int main()
{
	int t, n;

	scanf("%d", &t);
	dp();

	for(int i = 0; i < t; i++)
	{
		scanf("%d", &n);
		printf("%d %d\n", countZero[n], countOne[n]);
	}

	return 0;
}