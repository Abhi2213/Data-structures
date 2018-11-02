using namespace std;
#include<iostream>
int main()
{
	int size,i,choice,front=-1,rear=-1,exit=1;
	cout<<"enter the size of queue:";
	cin>>size;
	int q[size];
	cout<<" enter your choice ";		//choice for operation
	while(exit)
	{
	cout<<"\n 1. Check 2. Insertion 3.Deletion \n";		//various operations
	cin>>choice;
	switch (choice)
	{
		case 1 :									
			if (front==rear==-1)
			{
				cout<<"\nQueue is empty\n";
			}
			if (rear==size-1)
			{
				cout<<"\nQueue is full\n";
			}
			cout<<" front is \n"<<front<<" rear is \n"<<rear;
		
	         break;
	    case 2 :
	    	if (rear==size-1)
	    	{
	    		cout<<"\nThe queue is already full\n";
			}
			else
			{
			cin>>q[rear];
			rear++;}
			break;
		case 3 :
			if (rear==-1)
			{
				cout<<"\nThe queue is already empty\n";
			}
			else
			{
				for(i=0;i<=rear;i++)
				{
					q[i]=q[i+1];
				}
				rear=rear-1;
			}
			break;
		default : 
		cout<<" \nsorry wrong choice\n ";
		exit=0;
		break;
	}
}
}
