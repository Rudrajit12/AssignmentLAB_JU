#include<stdio.h>
#include<stdlib.h>

int main()
{
	int array[10],size;
	int i,key,result;
	printf("Enter the number of elements");
	scanf("%d",&size);
	printf("Enter the array");
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Enter the value to be searched \n");
	scanf("%d",&key);
	result=binarysearch(array,0,size-1,key);
	(result == 1)?printf("Value not found in array"):printf("Value found in position %d",result);
}

int binarysearch(int array[],int beg,int end,int key)
{
	while(beg<=end)
	{
		int mid=(beg+end)/2;
		if(array[mid]==key)
			return mid;
		if(array[mid]>key)
			return binarysearch(array,beg,mid-1,key);
		else
			return binarysearch(array,mid+1,end,key);
	}
	return -1;
}
