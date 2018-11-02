/*
ABHISHEK KUMAR
2017BTECHCSE017
*/
// insertion program ia a array 
#include <stdio.h>
 
int main()
{
   int array[100], c, n;
 
   printf("Enter number of elements in array\n");
   scanf("%d", &n);
 
   printf("Enter %d elements\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);
 
   
   printf("Resultant array is\n");
 
   for (c = 0; c <= n; c++)
      printf("%d\n", array[c]);
 
return 0;
}


