/*
Program(4)-> Write a program to calculate the area of circle .
Solution(2)-> User defined values.
*/

#include<stdio.h>
int main()
{
    float radius,area;

    printf("\n Enter the raidus of the circle:");
    scanf("%f",&radius);
    area = (3.14*radius*radius);
    printf("\n Area of Circle = %f",area);

    return 0;

}