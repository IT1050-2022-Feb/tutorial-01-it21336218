/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  int no1,no2;
  float average;
     printf("enter the first no\n");
     scanf("%d",&no1);
     printf("enter the second no\n");
     scanf("%d",&no2);
      
    average =(no1+no2)/2;
    printf("the average is:%.2f",average);


 
 
 
 
 
 
 
  return 0;
}

