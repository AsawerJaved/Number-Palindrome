#include<iostream>
using namespace std;
int main()
{
	int size=0,check=0;
	cout<<"Enter size of array: ";
	cin>>size;
	char* array=new char[size+1];        // allocating memory to the array dynamically
	cout<<"Enter array: ";
	cin>>array;
	for(int a=0;a<size/2;a++)
	{                                             // e.g.if size=6 then,
		if(array[a]==array[size-a-1])           // if (array[0]==array[6-0-1]) i.e. the last index
		check++;
	}
	if(check==size/2)                     
	cout<<array<<" is a Palindrome"<<endl;
	else
	cout<<array<<" is not a Palindrome"<<endl;
	
	return 0;
}
