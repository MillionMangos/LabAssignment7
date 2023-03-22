#include <stdio.h>
#include <stdlib.h>
int swapTotalIteration;

void newBubbleSort(int *pData, int n)
{
	int i, j, temp;
    printf("\n");
	for(i = 0; i < n-1; i++)
	{
		for(j = 0; j < n-i-1; j++)
		{
			if(pData[j] > pData[j+1])
			{
            swapTotalIteration++;
			temp = pData[j];
			pData[j] = pData[j+1];
			pData[j+1] = temp;
			}
		}
        printf("Swaps for Iteration %d: %d\n",i, swapTotalIteration);
        swapTotalIteration = 0;
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
    newBubbleSort(p, n);
    printf("NewArray:\n");
    for(int i = 0; i < n; i++)
    {
        if(i+1 == n)
        {
            printf("%d", originalArray[i]);
            break;
        }
        printf("%d, ", originalArray[i]);
    }
}