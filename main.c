#include <stdio.h>
#include <stdlib.h>


 int main()
{
    int num, rem, sum = 0, temp;
    printf("\nEnter the number :");
    scanf("%d",&num);
    temp = num;

    while(num>0)
    {
        rem = num%10;
        sum = sum*10 + rem;
        num = num/10;
    }

    if(temp == rev)
        printf("\n%d is a palindrome",temp);
    else
        printf("\n%d is not a palindrome",temp);

    return 0;
}
