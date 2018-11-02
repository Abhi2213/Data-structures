/*
ABHISHEK KUMAR
2017BTECHCSE017
*/
//implementation of stack
using namespace std;
#include<iostream>
#define size 5
int ch,start;int end=-1;int i;
	int stack[size];
int main()
{

	

	

		int push();


	int  pop();


	int display();

	
	while (1)
	{
	cout<<"\nEnter \n 1:push\n 2:pop \n 3:traverse\n";		//various operations
	cin>>ch;

switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default : cout<<"sorry wrong choice";
        }
} return 0;
}



     void push(){
	
    if(end==size) 
		{
			cout<<"Stack is already full";
		}
		else
		{
		end++;
		cin>>stack[end];
	    }

}
int pop(){


    if (end==-1)
		{
			cout<<"Stack is already empty";
		}
		end--;
}

void display()
{

		cout<<"Elements in the stacks are:\n";
		for(i=0;i<end;i++)
		{
			cout<<stack[i]<<" ";
		}
}
