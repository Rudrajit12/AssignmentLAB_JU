#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(float *a,float *b)
{
	float temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void bubblesort(float arr[],int size)
{
	int i,j;
	for (i=0;i<size-1;i++)
		for(j=0;j<size-i-1;j++)
		{
			if (arr[j]>arr[j+1])
				swap(&arr[j],&arr[j+1]);
		}
}

void print(float arr[],int size)
{
	int i;
	for (i=0;i<size;i++)
		printf("%.2f \t",arr[i]);
		printf(" ");
}

int main()
{
	float arr[10];
	int size,i;
	printf("Enter the number of elements");
	scanf("%d",&size);
	srand(time(0));
	printf("Enter the array");
	for(i=0;i<size;i++)
	{
		arr[i]=rand()%100;
		printf(" %f ",arr[i]);
	}
	printf("\n");
	bubblesort(arr,size);
	printf("The sorted array is: ");
	print(arr,size);
	return 0;
}