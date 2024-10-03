template <typename T> void ShiftAndReplace(T* a, int i, int position, T replace) {
	while (i != position) {
		a[i] = a[i - 1];
		i--;
		a[position] = replace;
	}
}

template <typename T> int BinarySearch(int start, int end, T* a, T current_elem) {
	int middle = 0;
	while (start != end)
	{
		middle = (start + end) / 2;
		if (current_elem > a[middle]) {
			start = middle + 1;
		}
		else {
			end = middle;
		}
	}
	return start;
}


template <typename T> void BinaryInsertionSort(int n, T a[100])
{
	T r = 0;
	int count_sorted = 1;
	int position = 0;
	for (int i = 1; i < n; i++)
	{
		r = a[i];
		position = BinarySearch(0, count_sorted, a, r);
		ShiftAndReplace(a, i, position, r);
		count_sorted++;
	}
}