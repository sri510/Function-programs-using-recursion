/*Write a program in C to print the array elements using recursion. 
Test Data :
Input the number of elements to be stored in the array :6
Input 6 elements in the array :
element - 0 : 2
element - 1 : 4
element - 2 : 6
element - 3 : 8
element - 4 : 10
element - 5 : 12
Expected Output :
The elements in the array are : 2  4  6  8  10  12
*/
#include <stdio.h>
int main()
{
   int n;
   printf("Input the number of elements to be stored in the array : ");
   scanf("%d",&n);
   int arr1[n];
   printf("Input %d elements in the array : \n",n);
   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr1[i]);
   }
   printf("The elements in the array are : ");
   ArrayElement(arr1,0,n);
   return 0;
}

void ArrayElement(int arr1[], int st, int l)
{
    if(st>=l)
    return;
    printf("%d\t",arr1[st]);
    ArrayElement(arr1,st+1,l);
    
}
