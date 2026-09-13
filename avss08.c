/*
Program (8)-> Write a C program to swap two nubers using a temporary variable.
Solution(2)-> User defined values.
*/

#include<stdio.h>
int main()
{
    int a,b,temp;

    printf("\n Enter first number :");
    scanf("%d",&a);

    printf("\n Enter second number :");
    scanf("%d",&b);

    temp = a;
    a = b;
    b = temp;

    printf("\n After swapping:\n");
    printf("First number = %d\n",a);
    printf("\n Second number = %d\n",b);

    return 0;

}

