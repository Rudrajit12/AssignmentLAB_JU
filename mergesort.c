#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main()
{
	int array[10],size,i;
	printf("Enter the number of elements");
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
	merge_sort(array,0,size-1);
	//Printing the sorted array
	printf("The sorted array is");
	for(i=0;i<size;i++)
		printf(" %d ",array[i]);
	return 0;
}

void merge(int array[],int beg,int mid,int end)
{
	int i=beg,j=mid+1,index=beg,temp[10],k;
	while((i<=mid) && (j<=end))
	{
		if(array[i]<array[j])
		{
			temp[index]=array[i];
			i++;
		}
		else
		{
			temp[index]=array[j];
			j++;
		}
		index++;
	}
	if(i>mid)
	{
		while(j<=end)
		{
			temp[index]=array[j];
			j++;
			index++;
		}
	}
	else
	{
		while(i<=mid)
		{
			temp[index]=array[i];
			i++;
			index++;
		}
	}
	for(k=beg;k<index;k++)
	{
		array[k]=temp[k];
	}
}
void merge_sort(int array[],int beg,int end)
{
	int mid;
	if(beg<end)
	{
		mid=(beg+end)/2;
		merge_sort(array,beg,mid);
		merge_sort(array,mid+1,end);
		merge(array,beg,mid,end);
	}
}