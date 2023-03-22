#include <stdio.h>
#include <stdlib.h>

void newBubbleSort(int *pData, int *swapData, int n)
{
	int i, j, temp;
	for(i = 0; i < n-1; i++)
	{
		for(j = 0; j < n-i-1; j++)
		{
			if(pData[j] > pData[j+1])
			{
			temp = pData[j];
			pData[j] = pData[j+1];
			pData[j+1] = temp;
            swapData[j] += 1;
            swapData[j+1] += 1;
			}
		}
	}
}

int main()
{
    int n = 9;
    int originalArray[] = {97,  16,  45,  63,  13,  22,  7,  58,  72};
    int swapArray[n];
    for(int i = 0; i < n; i++)
    {
        swapArray[i] = 0;
    }
    int *p = originalArray;
    int *sw = swapArray;
    printf("OriginalArray:\n");
    for(int i = 0; i < n; i++)
    {
        if(i+1 == n)
        {
            printf("%d", originalArray[i]);
            break;
        }
        printf("%d, ", originalArray[i]);
        
    }
    newBubbleSort(p,sw, n);
    printf("\nNewArray:\n");
    for(int i = 0; i < n; i++)
    {
        if(i+1 == n)
        {
            printf("%d", originalArray[i]);
            break;
        }
        printf("%d, ", originalArray[i]);
    }
    printf("\nSwapsPerIndex:\n");
    for(int i = 0; i < n; i++)
    {
        printf("Index %d: %d\n", i, swapArray[i]);
    }
}