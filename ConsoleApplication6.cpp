//My comment

#include <stdio.h>
#include <math.h>  
#include "pch.h"
#define n 5
#include <iostream>


int my_array[5][5];
int start_array[] =
{ 9, 67, -65, 45, 1,
 12, 61, 48, -5, -1,
0, 39, 0, 41, 2,
36, 95, -8, -5, 0,
11, 22, 71, 3, 63 };


int j;
int i;
int h;
int l = 0;
int sum;
int result;


 int my_sort(int sort_array[n][n])
{
	//sort array
	int tmp;
	for (j = 0; j < n; j++) {
		for (int k = n - 1; k >= 0; k--) {
			for (i = 0; i < k; i++) {
				for (; i >= 2;) {
					if (sort_array[n][i] > sort_array[n][i + 1]) {
						tmp = sort_array[n][i + 1];
						sort_array[n][i + 1] = sort_array[n][i];
						sort_array[n][i] = tmp;
					}
				}
			}
		}
	}
	return sort_array[n][n];
 }

 int my_sum(int sum_result, int w) {
	return (sum_result + w);
	 
 }


int main()
{
	h = 0;
	for (j = 0; j < n; j++) {
		for (i = 0; i < n; i++) {
			my_array[j][i] = start_array[h];
			h++;
		}
	}
	
  
	int new_array[5][5] = { my_sort(my_array) };
	printf("\n New array\n");
	for (j = 0; j < n; j++) {
		for (i = 0; i < n; i++) {
			printf("%5d",my_array[j][i]);
		}
		printf("\n");
	}
 
	
	//sum up diagonal
	printf("\n  sum colums \n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (j < l) {
				sum =  my_sum(sum, my_array[j][i]);
				//printf("row = %d column = %d value = %d\n", i, j, my_array[j][i]);
			}
		}
		result = result * sum;
		printf(" sum  column %d = %d \n", i, sum);
		sum = 0;
		l++;
		printf(" result = %d  \n", result);

	}
}
	






