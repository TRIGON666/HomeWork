// file massiv 3 

// #1

#include <iostream>

using namespace std;

//int main() {
//	int n;
//	cin >> n;
//	int* mas = new int[n];
//	for (int i = 0; i < n; ++i) {
//		cin >> mas[i];
//	}
// 
//	for (int i = 0; i < n-1; ++i) {
//		for (int j = 0; j < n - i - 1; ++j) {
//			if (mas[j] > mas[j + 1]) {
//				swap(mas[j], mas[j + 1]);
//			}
//		}
//	}
//	for (int i = 0; i < n; ++i) cout << mas[i] << " ";
//}

// #2

//int main() {
//	int size;
//	cin >> size;
//	int* mas = new int[size];
//
//	for (int i = 0; i < size; ++i) {
//		cin >> mas[i];
//	}
//
//	for (int i = 0; i < size-1; ++i) {
//		int max = mas[i], index = i;
//		for (int j = i + 1; j < size; ++j) {
//			if (mas[j] > max) {
//				max = mas[j];
//				index = j;
//			}
//		}
//		swap(mas[i], mas[index]);
//	}
//	for (int i = 0; i < size; ++i) cout << mas[i] << " ";
//}

// #3

//int main() {
//	int size;
//	cin >> size;
//	int* mas = new int[size];
//	for (int i = 0; i < size; ++i) cin >> mas[i];
//	for (int i = 0; i < size; ++i) {
//
//		bool SortInsert = true;
//		for (int j = i; SortInsert && j > 0; --j) {
//			if (mas[j] > mas[j - 1]) swap(mas[j], mas[j - 1]);
//			else SortInsert = false;
//		}
//	}
//	for (int i = 0; i < size; ++i) cout << mas[i] << " ";
//}

// file masssv 4

// #1

//int main() {
//	int* mas = new int[10]();
//	cout << "Input your number here: ";
//	int n;
//	cin >> n;
//		for (int i = 1; i <= n; ++i) {
//			int temp = i;
//
//			while (temp > 0) {
//				int digit = temp % 10;
//				mas[digit]++;
//				temp /= 10;
//			}
//		}
//	for (int i = 0; i < 10; ++i) {
//		cout << mas[i] << " "; // the result of the task is an error, the program is correct
//	}
//}

// #2

//int main() {
//	int* mas = new int[10]();
//	
//	cout << "Input your count number here: ";
//	int n;
//	cin >> n;
//	int* mas_b = new int[n];
//	for (int i = 0; i < n; ++i) cin >> mas_b[i];
//	for (int z = 0; z < n; ++z) {
//		for (int i = 1; i <= mas_b[z]; ++i) {
//			int temp = i;
//
//			while (temp > 0) {
//				int digit = temp % 10;
//				mas[digit]++;
//				temp /= 10;
//			}
//		}
//	}
//	for (int i = 0; i < 10; ++i) {
//		cout << mas[i] << " "; 
//	}
//}

// #3

//int main() {
	//	int n;
	//	cin >> n;
	//	int* mas = new int[n];
	//	int temp_1;
	//	for (int i = 0; i < n; ++i) {
	//		cin >> mas[i];
	//	}
	//	temp_1 = mas[0];
	//
	//	for (int i = 0; i < n; ++i) {
	//		mas[i] = mas[i + 1];
	//	}
	//	mas[n-1] = temp_1;
	//
	//	for (int i = 0; i < n; ++i) {

	//		cout << mas[i] << "\t";

	//	}
	//}



// #4

//int main() {
//	int n;
//	cin >> n;
//	int k;
//	cout << "Input your K number: ";
//	cin >> k;
//	int* mas = new int[n];
//	int* temp_1 = new int[k];
//	for (int i = 0; i < n; ++i) {
//		cin >> mas[i];
//	}
//	for (int i = 0; i < k; ++i) {
//		temp_1[i] = mas[n - k + i];
//	}
//
//	for (int i = n - 1; i >= k; --i) {
//		mas[i] = mas[i-k];
//	}
//	for (int i = 0; i < k; ++i) {
//		mas[i] = temp_1[i];
//	}
//
//	for (int i = 0; i < n; ++i) {
//
//		cout << mas[i] << "\t";
//
//	}
//}

// #5

//int main() {
//		int n;
//		cin >> n;
//		int k;
//		cout << "Input your K number: ";
//		cin >> k;
//		int* mas = new int[n];
//		int* temp_1 = new int[k];
//		for (int i = 0; i < n; ++i) {
//			cin >> mas[i];
//		}
//		for (int i = 0; i < k; ++i) {
//			temp_1[i] = mas[i];
//		}
//	
//		for (int i = k; i < n; ++i) {
//			mas[i - k] = mas[i];
//		}
//		for (int i = 0; i < k; ++i) {
//			mas[n - k + i] = temp_1[i];
//		}
//	
//		for (int i = 0; i < n; ++i) {
//
//			cout << mas[i] << "\t";
//
//		}
//	}

// #6

//int main() {
//	int n;
//	cin >> n;
//	int* mas = new int[n];
//	for (int i = 0; i < n; ++i) {
//		cin >> mas[i];
//	}
//	int MaxIndex = -1, MinIndex = -1;
//	int MaxValue = mas[0], MinValue = mas[0];
//	for (int i = 1; i < n; ++i) {
//		if (mas[i] < MinValue) MinValue = mas[i];
//		if (mas[i] > MaxValue) MaxValue = mas[i];
//}
//
//	for (int i = 0; i < n; ++i) {
//		if (mas[i] == MinValue && MinIndex == -1) MinIndex = i;
//		if (mas[i] == MaxValue) MaxIndex = i;
//	}
//
//	if (MinIndex > MaxIndex) swap(MinIndex, MaxIndex);
//	
//	for (int i = MinIndex + 1; i <= MaxIndex; ++i) {
//		for (int j = MinIndex; j < MaxIndex - (i - MinIndex); ++j) {
//			if (mas[j] > mas[j + 1]) swap(mas[j], mas[j + 1]);
//		}
//	}
//	for (int i = 0; i < n; ++i) cout << mas[i] << " ";
//}

// #7

//int main() {
//    int n, m;
//    cin >> n >> m;
//    int* a = new int[n];
//    int* b = new int[m];
//    int* sortMas = new int[n + m];
//    for (int i = 0; i < n; ++i) cin >> a[i];
//    for (int i = 0; i < m; ++i) cin >> b[i];
//    int i = 0, j = 0, k = 0;
//    while (i < n && j < m)
//    {
//        if (a[i] < b[j])
//        {
//            sortMas[k] = a[i];
//            i++;
//        }
//        else
//        {
//            sortMas[k] = b[j];
//            j++;
//        }
//        k++;
//    }
//    while (i < n)
//    {
//        sortMas[k] = a[i];
//        i++;
//        k++;
//    }
//    while (j < m)
//    {
//        sortMas[k] = b[j];
//        j++;
//        k++;
//    }
//    for (int i = 0; i < n + m; ++i) cout << sortMas[i] << " ";
//}