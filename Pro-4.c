/* Write a program in C to calculate the power of any number using recursion. 
Test Data :
Input the base value : 2
Input the value of power : 6
Expected Output :
The value of 2 to the power of 6 is : 64
*/
#include <stdio.h>
 
long int CalcuOfPower(int x,int y)
{
    if(y==0)
    return 1;
    else
    return(x*CalcuOfPower(x,y-1));
    return 0;
}	
int main()
{
    int x,y;
    printf("Input the base value : ");
    scanf("%d",&x);
    printf("Input the value of power : ");
    scanf("%d",&y);
    printf("The value of %d to the power of %d is : %ld",x,y,CalcuOfPower(x,y));
    return 0;
}
