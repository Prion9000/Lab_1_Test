#include <math.h>
#include "statistics.h"

double calculate_sum(const double array[], int length) {
	double sum = 0.0;
  for (int i = 0; i < length; i++) {
		  sum += array[i];
			}
		 return sum;
		 }

double calculate_average(const double array[], int length) {
	  if (length == 0) {
			  return 0; 
		 }
	   return calculate_sum(array, length) / length;
	}

double calculate_std_deviation(const double array[], int length) {
	  if (length <= 1) {
			  return 0; 
	  }

	 double mean = calculate_average(array, length);
	 double sigma = 0.0;

	 for (int i = 0; i < length; i++) {
		  sigma += pow(array[i] - mean, 2);
	  }

		 return sqrt(sigma / (length - 1));
	}	

