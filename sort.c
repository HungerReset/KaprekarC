int * sort (int array[], int len) {
	
	bool sorted = 0;
	int t = 0;
	while (!sorted) {
		sorted = 1;
		for (int i = 0; i < len; ++i) {
			if (array[i] > array[i+1] && i != len - 1) {
				int t = array[i];
				array[i] = array[i+1];
				array[i+1] = t;
				sorted = 0;
			}
		}
	}

	return array;
}
