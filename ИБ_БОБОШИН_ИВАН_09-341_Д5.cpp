// ФАЙЛ МАССИВЫ1



// #1

// sizeof - размер массива(байт)

//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//	int* mass = new int[n];
//	for (int i = 0; i < n; ++i) {
//		cin >> mass[i];
//	}
//	for (int i = 0; i < n/2; ++i) {
//		swap(mass[i], mass[n-1-i]);
//	}
//
//	for (int i = 0; i < n; ++i) {
//		cout << "\f" << mass[i];
//	}
//
//}

// #2
//
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int n, pol_n;
//	cin >> n;
//	int* mass = new int[n];
//	pol_n = n / 2;
//	for (int i = 0; i < n; ++i) {
//		cin >> mass[i];
//	}
//	for (int i = 0; i < pol_n; ++i) {
//		swap(mass[i], mass[pol_n + i]);
//	}
//	for (int i = 0; i < n; ++i) {
//		cout << "\t" << mass[i];
//	}
//}







// ФАЙЛ МАССИВЫ2

// # 1

//#include <iostream>
//using namespace std;
//
//int main() {
//
//	int n;
//	cin >> n;
//	int* mas = new int[n];
//	int max_mas = INT_MIN, min_mas = INT_MAX, pos_min, pos_max;
//
//	for (int i = 0; i < n; ++i) {
//		cin >> mas[i];
//
//		max_mas = max(mas[i], max_mas);
//		min_mas = min(mas[i], min_mas);
//		if (max_mas == mas[i]) pos_max = i;
//		if (min_mas == mas[i])  pos_min = i;
//	}
//
//	for (int i = 0; i < n; ++i) {
//		if (mas[i] == max_mas && i == pos_max) {
//			cout << mas[i] << "(" << pos_max << ") \n";
//		}
//		if (mas[i] == min_mas && i == pos_min) {
//			cout << mas[i] << "(" << pos_min << ") \n";
//		}
//		
//	}
//}


// #2

//#include <iostream>
//using namespace std;
//
//int main() {
//
//	int n;
//	cin >> n;
//	int* mas = new int[n];
//	int max_mas = INT_MIN, min_mas = INT_MAX, pos_min, pos_max;
//
//	for (int i = 0; i < n; ++i) {
//		cin >> mas[i];
//
//		max_mas = max(mas[i], max_mas);
//		min_mas = min(mas[i], min_mas);
//		if (max_mas == mas[i]) pos_max = i;
//		if (min_mas == mas[i])  pos_min = i;
//	}
//
//	for (int i = 0; i < n; ++i) {
//		if (mas[i] == max_mas && i == pos_max) {
//			mas[i] = min_mas;
//		}
//		if (mas[i] == min_mas && i == pos_min) {
//			mas[i] = max_mas;
//		}
//		cout << mas[i] << "\t";
//	}
//}

// #3
	//#include <iostream>
	//using namespace std;

	//int main() {
	//	int n;
	//	cin >> n;
	//	int* mas = new int[n];
	//	int temp_1;
	//	for (int i = 0; i < n; ++i) {
	//		cin >> mas[i];
	//	}
	//	temp_1 = mas[n-1];
	//
	//	for (int i = n - 1; i > 0; --i) {
	//		mas[i] = mas[i - 1];
	//	}
	//	mas[0] = temp_1;
	//
	//	for (int i = 0; i < n; ++i) {

	//		cout << mas[i] << "\t";

	//	}
	//}

// # 4
// дорешать 
//#include <iostream>
//#include <ctime>
//
//using namespace std;
//
//int main() {
//	srand(time(0));
//	int n;
//	cin >> n;
//	int* mas = new int[n];
//	bool check_list = true;
//	int digit;
//	digit = rand() % 10;
//	cout << digit << endl;
//	for (int i = 0; i < n; ++i) {
//		cin >> mas[i];
//	}
//	for (int i = 0; i < n; ++i) {
//		if (digit == mas[i]) check_list = false;
//		}
//	if (check_list == true) cout << digit;
//	
//	return 0;
//}

// #5

//#include <iostream>
//using namespace std;
//int main() {
//	int n;
//	cin >> n;
//	int* mas = new int[n];
//	int* arr = new int[n];
//	int count = 0;
//	for (int i = 0; i < n; ++i) {
//		cin >> mas[i];
//	}
//	for (int i = 0; i < n; ++i) {
//		int temp = mas[i];
//		for (int j = i; j < n; ++j) {
//			if (mas[j] == temp) {
//				count++;
//			}
//		}
//	}
//	if (count == n) cout << "DA";
//	else cout << "NET";
//}


// #6
#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	int n;
	cin >> n;
	int* mas = new int[n];
	int search;
	for (int i = 0; i < n; ++i) {
		cin >> mas[i];
	}
	int k = 0;
	cin >> search;
	for (int i = 0; i < n; ++i) {
		if (search == mas[i]) {
			k++;
			cout << "Число " << search << " находится в " << i << endl;
		}
	}
	if (k == 0) cout <<"-1";
}