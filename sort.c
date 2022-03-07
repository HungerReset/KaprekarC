#include <stdio.h>
#include <stdbool.h>

int * sort (int array[], int len) {
	
	bool sorted = false;
	int t = 0;
	while (!sorted) {
		sorted = true;
		for (int i = 0; i < len; ++i) {
			if (array[i] > array[i+1] && i != len - 1) {
				int t = array[i];
				array[i] = array[i+1];
				array[i+1] = t;
				sorted = false;
			}
		}
	}

	return array;
}