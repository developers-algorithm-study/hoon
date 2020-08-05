#include <stdio.h>
#include <stdlib.h>

int swap(int * arr, int a, int b)
{
    int tmp = arr[a];
    arr[a] = arr[b];
    arr[b] = tmp;
}

int part(int * arr, int left, int right)
{
    int pivot = arr[left];
    int low = left + 1;
    int high = right;

    while (low <= high)
    {
        while (low <= right && pivot >= arr[low])
            low++;
        while (high >= (left+1) && pivot <= arr[high])
            high--;
        if(low <= high)
            swap(arr, low, high);
    }
    swap(arr, left, high);

    return high;
}

int sort(int * arr, int left, int right)
{
    if(left <= right)
    {
        int pivot = part(arr, left, right);
        sort(arr, left, pivot - 1);
        sort(arr, pivot + 1, right);
    }
}

int main()
{
    int n;
    
    scanf("%d", &n);

    int * m = (int*)malloc(sizeof(int) * n);

    for(int i = 0; i < n; i++)
        scanf("%d", &m[i]);

    sort(m, 0, n - 1);

    printf("%d", m[0] * m[n - 1]);

    return 0;
}