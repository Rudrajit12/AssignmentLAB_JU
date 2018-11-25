#include<iostream>
using namespace std;

int max(int a, int b)
{
	return(a > b) ? a : b;
}

int knapsack(int cap,int wt[],int val[],int n)
{
	int i,w;
	int K[n+1][cap+1];
	for(i=0;i<=n;i++)
	{
		for(w=0;w<=cap;w++)
		{
			if(i==0 || w==0)
			{
				K[i][w] = 0;
			}
			else if(wt[i-1]<=w)
			{
				K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],K[i-1][w]);
			}
			else
				K[i][w] = K[i-1][w];
		}
	}
	return K[n][cap];
}

int main()
{
	cout<<"Enter the number of items in knapsack";
	int n,cap;
	cin>>n;
	int val[n], wt[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter value and weight for item"<<i<<":";
		cin>>val[i];
		cin>>wt[i];
	}
	cout<<"Enter the capacity of knapsack";
	cin>>cap;
	cout<<knapsack(cap,wt,val,n);
	return 0;
}