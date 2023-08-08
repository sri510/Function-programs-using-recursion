/* Write a program in C to get the largest element of an array using recursion. 
Test Data :
Input the number of elements to be stored in the array :5
Input 5 elements in the array :
element - 0 : 5
element - 1 : 10
element - 2 : 15
element - 3 : 20
element - 4 : 25
Expected Output :
Largest element of an array is: 25
*/
#include<stdio.h>
int MaxElem(int[]);
int n;

int main()
{
    int arr1[20],l,i;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d",&n);
    printf("Input %d element in the array:\n",n);
    
    for(i=0;i<n;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&arr1[i]);
    }
    l=MaxElem(arr1);
    printf("Largest element of an array is: %d\n\n",l);
    return 0;
}
int MaxElem(int arr1[])
{
    static int i=0,l = -9999;
    if(i<n)
    {
        if(l<arr1[i])
          l=arr1[i];
      i++;
      MaxElem(arr1);
    }
    return l;
}
