#include <stdio.h> 
#include "statistics.h"


int main(){
double array1[] = {1.0, 3.0, 4.0, 6.0, 8.0};
double array2[] = {3.0, 8.0, 9.0, 10.0, 11.0};
double array3[] = {3.4, 3.8, 5.3, 4.1, 5.6}; 

int length1 = sizeof(array1) / sizeof(array1[0]);
int length2 = sizeof(array2) / sizeof(array2[0]); 
int length3 = sizeof(array3) / sizeof(array3[0]); 

 printf("Array 1 Stats:\n");
 printf("Sum: %.2f\n", calculate_sum(array1, length1));
 printf("Average: %.2f\n", calculate_average(array1, length1));
 printf("Standard Deviation: %.2f\n", calculate_std_deviation(array1, length1));
 printf("\n");

 printf("Array 2 Stats:\n");
 printf("Sum: %.2f\n", calculate_sum(array2, length2));
 printf("Average: %.2f\n", calculate_average(array2, length2));
 printf("Standard Deviation: %.2f\n", calculate_std_deviation(array2, length2));
 printf("\n");

 printf("Array 3 Stats:\n");
 printf("Sum: %.2f\n", calculate_sum(array3, length3));
 printf("Average: %.2f\n", calculate_average(array3, length3));
 printf("Standard Deviation: %.2f\n", calculate_std_deviation(array3, length3));
 
 return 0;
}																														

