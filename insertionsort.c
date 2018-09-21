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
	//comp variable for counting the number of comparisons and no_of_swap for counting the swap.
	int comp=0,no_of_swap=0;
	for(i=1;i<size;i++)
	{
		temp=array[i];
		j=i-1;
		//We check or compare the values whether the loop condition satisfies or not.
		comp++;
		while(temp < array[j] && j>=0)
		{
			array[j+1]=array[j];
			no_of_swap++;
			j--;
			//We check or compare once again that the loop condition satisfies or not.
			comp++;
		}
		array[j+1]=temp;
	}
	printf("The number of comparisons occuring are %d \n",comp);
	printf("The number of swaps %d \n",no_of_swap);
}