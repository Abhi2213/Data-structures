/*
ABHISHEK KUMAR
2017BTECHCSE017
*/
// program to find second largest number in an array
#include<iostream>
#include<conio.h>
using namespace std; 
int main()
{
    int a[50];
    int n,i,large,s_large;
   
     
    printf("\n Enter number of elements: ");
    scanf("%d",&n);
     
    printf("\n Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     
    large=s_large=a[0];
     
    for(i=1;i<n;i++)
    {
        if(large<a[i])
        {
            s_large=large;
            large=a[i];
        }
        else if(s_large<a[i] && a[i]!=large)
        {
            s_large=a[i];
        }
    }
     
    printf("\n The Second Largest Element in the given Array: %d", s_large);
  return 0;
}
