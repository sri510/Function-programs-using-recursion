/*Write a program in C to find the GCD of two numbers using recursion. 
Test Data :
Input 1st number: 10
Input 2nd number: 50
Expected Output :
The GCD of 10 and 50 is: 10
*/
#include<stdio.h>
int findGCD(int a,int b);
int main()
{
  int a,b;
  printf("Input 1st number: ");
  scanf("%d",&a);
  printf("Input 2nd number: ");
  scanf("%d",&b);
  printf("Expected Output:\n");
  printf("The GCD of %d and %d is: %d",a,b,findGCD(a,b));
  return 0;
}

int findGCD(int a,int b)
{
    if(b != 0)
    return findGCD(b,a%b);
    else
    return a;
}
