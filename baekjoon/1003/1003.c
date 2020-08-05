#include <stdio.h>

int pivo(int num, int* tmp)
{
	int result;
	if (num <= 1)
		return tmp[0];

	else if (num == 2)
		return tmp[1];

	else {
		pivo(num - 1, tmp);
		result = tmp[0] + tmp[1];
		tmp[0] = tmp[1];
		tmp[1] = result;
	}
	return result;
}

int main()
{
	int tmp[2] = { 0,1 };
	int num;

	scanf("%d", &num);

	if (num < 0 || num - 1 >= 20)
	    return 1;

	printf("%d", pivo(num + 1, tmp));

	return 0;
}