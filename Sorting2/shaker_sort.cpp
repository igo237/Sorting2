template <typename T>void ShakerSort(int n, T a[100]) {
	int r = 0;
	int j = 0;
	for (int i = 0; i < n - 1; i++) {
		int flag = 0;
		for (j = 0; j < n - 1; j++) {
			if (a[j] > a[j + 1]) {
				r = a[j + 1];
				a[j + 1] = a[j];
				a[j] = r;
				flag = 1;
			}
		}
		for (int c = j; c > 0; c--) {
			if (a[c] < a[c - 1]) {
				r = a[c];
				a[c] = a[c - 1];
				a[c - 1] = r;
				flag = 1;
			}
		}
		if (!flag) {
			break;
		}

	}
}