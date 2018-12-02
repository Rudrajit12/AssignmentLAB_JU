#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int partition(int arr[],int beg,int end)
{
	int temp,temp1;
	int loc = arr[end];
	int i = beg;
	for(int j = beg;j<=end-1;j++)
	{
		if(arr[j] <= loc)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
		}
	}
	temp1 = arr[i];
	arr[i] = arr[end];
	arr[end] = temp1;
	return i;
}

int r_partition(int arr[],int beg,int end)
{
	int i = beg + rand()%(end-beg+1);
	int temp;
	temp = arr[end];
	arr[end] = arr[i];
	arr[i] = temp;
	return partition(arr,beg,end);
}

void quicksort(int arr[],int beg,int end)
{
	int loc;
	if(beg < end)
	{
		loc = r_partition(arr,beg,end);
		quicksort(arr,beg,loc-1);
		quicksort(arr,loc+1,end);
	}
}

int main()
{
	int arr[10],size,i;
	cout<<"Enter the number of elements:";
	cin>>size;
	srand(time(0));
	cout<<"Enter the array:"<<endl;
	for(i=0;i<size;i++)
	{
		arr[i] = rand()%100;
		cout<<" "<<arr[i];
	}
	quicksort(arr,0,size-1);
	cout<<endl<<"The sorted array is:"<<endl;
	for(i=0;i<size;i++)
		cout<<" "<<arr[i];
}