/* Write a C program to check whether a given string is a palindrome or not using recursion. 
Test Data :
Input a word to check for palindrome : mom
Expected Output :
 The entered word is a palindrome.
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char P[20];
    printf("Input a word to check for palindrome : ");
    scanf("%s",P);
    checkPalindrome(P,0);
    return 0;
}
 
void checkPalindrome(char P[], int i)
{
    int len=strlen(P)-(i+1);
    if (P[i]==P[len])
    {
        if(i+1==len || i==len)
        {
            printf("The entered word is a palindrome.");
            return;
        }
        checkPalindrome(P,i+1);
    }
    else{
    printf("The entered word in not palindrome.");
    }
}
