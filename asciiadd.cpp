#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int sum1 = 0,sum2 = 0,i,len;
	char first_name[100], second_name[100];

	cout<<"Enter your first name:";
	cin>>first_name;
	cout<<"Your first name is:"<<first_name<<endl;
	for(i=0;i<strlen(first_name);i++)
	{
		sum1 = sum1 + first_name[i];
	}
	cout<<"Sum of characters of first name is:"<<sum1<<endl;

	cout<<"Enter your second name:";
	cin>>second_name;
	cout<<"Your second name is:"<<second_name<<endl;
	for(i=0;i<strlen(second_name);i++)
	{
		sum2 = sum2 + second_name[i];
	}
	cout<<"Sum of characters of second name is:"<<sum2<<endl;
	cout<<"Sum of characters of whole name is:"<<sum1 + sum2<<endl;
}