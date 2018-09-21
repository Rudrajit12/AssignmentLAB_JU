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

void bubblesort(float arr[],int n)
{
	int i,j;
	for (i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
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
	float arr[]={5.2,1.5,0.6,8.5,6.4};
	bubblesort(arr,5);
	printf("The sorted array is: ");
	print(arr,5);
	return 0;
}