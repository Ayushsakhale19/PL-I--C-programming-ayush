/* Program (18) -> write a program to accept elements of integer , float and character arrays from the user and display the value and corresponding memory address of each array element

Solution(2) : user define program + using all types of loops + implicit way to write the program 
*/

#include <stdio.h>
int main()
{
int var1[5];
float var2[5];
char var3[5];
int i,j,k;

for(i=0;i<=4;i++)
{
    printf("\n Enter the value of var1 of index %d : ",i);
    scanf("%d",&var1[i]);
}

for(i=0;i<=4;i++)
{
printf("At index %d",i);
printf("\n The value of var1 is %d",var1[i]);
printf("and address is %d \n",&var1[i]);
}

printf("\n \n");
j = 0;
while(j<=4)
{
    printf("\n Enter the value of var2 of index %d : ",j);
    scanf("%f",&var2[j]);
    j++;
}
j = 0;
while(j<=4)
{
printf("At index %d",j);
printf("\n The value of var2 is %f",var2[j]);
printf("and address is %d \n",&var2[j]);
j++;
}

printf("\n \n");
k = 0;
do
{
    printf("Enter your character value:");
    scanf(" %c",&var3[k]);
    k++;
}while(k<=4);
k = 0;
do
{  
printf("At index %d",k);
printf("\n The value of var3 is %c",var3[k]);
printf("and address is %d \n",&var3[k]);
k++;
}while(k<=4);


return 0;
}
