//Program to find out how many times the key is compared with the array values in a binary search problem.
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int array[10],size,key,beg,end,mid;
	//Declare a comp variable to count the number of comparisons
	int i,comp=0;
	int pos=0;
	printf("Enter the number of elements");
	scanf("%d",&size);
	printf("Enter the array");
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	beg=0;
	end=size-1;
	printf("Enter the value to be searched \n");
	scanf("%d",&key);

	while(beg<=end)
	{
		mid=(beg+end)/2;
		//We compare the key with middle element of the array here.
		comp++;
		if(key==array[mid])
		{
			printf("Value found in position %d ",mid);
			pos=1;
			break;
		}
		//If the key is not in the middle then we again compare if this is larger or smaller than middle element.
		comp++;
		if(key>array[mid])
			beg=mid+1;
		else
			end=mid-1;
	}
	printf("\n");
	printf("The number of comparisons are %d",comp);
	if(beg>end && pos==0)
		printf("%d does not exist in array",key);
	return 0;
}