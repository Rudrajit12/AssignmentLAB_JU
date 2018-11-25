#include<iostream>
#include<cstdlib>
using namespace std;
int partition(int arr[],int beg,int end);
void quicksort(int arr[],int beg,int end);

int main()
{
	int arr[10],i,n;
	cout<<"Enter the number of elements in array:";
	cin>>n;
	cout<<"Enter the array:";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	quicksort(arr,0,n-1);
	cout<<"The sorted array is:";
	for(i=0;i<n;i++)
		cout<<arr[i]<<endl;
}

int partition(int arr[],int beg,int end)
{
	int left,right,loc,temp,flag;
	loc = left = beg;
	right = end;
	flag = 0;
	while(flag!=1)
	{
		while((arr[loc] <= arr[right]) && (loc!=right))
		{
			right--;
		}
		if(loc == right)
			flag = 1;
		else if(arr[loc] > arr[right])
		{
			temp = arr[loc];
			arr[loc] = arr[right];
			arr[right] = temp;
			loc = right;
		}
		if(flag != 1)
		{
			while((arr[loc] >= arr[left]) && (loc != left))
				left++;
			if(loc == left)
				flag = 1;
			else if(arr[loc] < arr[left])
			{
				temp = arr[loc];
				arr[loc] = arr[left];
				arr[left] = temp;
				loc = left;
			}
		}
	}
	return loc;
}

void quicksort(int arr[],int beg,int end)
{
	int loc;
	if(beg < end)
	{
		loc = partition(arr,beg,end);
		quicksort(arr,beg,loc-1);
		quicksort(arr,loc+1,end);
	}
}