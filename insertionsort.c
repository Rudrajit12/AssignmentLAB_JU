//Program to find out the number of comparisons in an insertion sort problem.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int array[10],size,i;
	printf("Enter the number of elements in the array");
	scanf("%d",&size);
	printf("Enter the array");
	srand(time(0));
	//Getting an array of random numbers
	for(i=0;i<size;i++)
	{
		array[i]=rand()%100;
		printf(" %d ",array[i]);
	}
	printf("\n");

	insertion_sort(array,size);
	//Printing the sorted array
	printf("The sorted array is");
	for(i=0;i<size;i++)
		printf(" %d ",array[i]);

	return 0;

}

void insertion_sort(int array[],int size)
{
	int i,j,temp=0;
	//Count variable for counting the number of comparisons
	int count=0;
	for(i=0;i<size;i++)
	{
		temp=array[i];
		j=i-1;
		while(temp < array[j] && j>=0)
		{
			count++;
			array[j+1]=array[j];
			j--;
		}
		array[j+1]=temp;
	}
	printf("The number of comparisons occuring are %d \n",count);
}