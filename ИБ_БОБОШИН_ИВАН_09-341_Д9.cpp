#include <iostream>

using namespace std;


//int main() {
//	int N, M;
//	cin >> N >> M;
//	int **mas = new int*[N];
//	for (int i = 0; i < N; ++i) {
//		mas[i] = new int[M];
//	}
//	for (int i = 0; i < N; ++i) {
//		for (int j = 0; j < M; ++j) {
//			cin >> mas[i][j];
//		}
//	}
//	for (int i = 0; i < N; ++i) {
//		for (int j = 0; j < M; ++j) {
//			cout << mas[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//
//	for (int i = 0; i < N; ++i) delete [] mas[i];
//	delete[] mas;
//}



// file 1
// #1

//int main() {
//	setlocale(LC_ALL, "ru");
//	int N, M;
//	cin >> N >> M;
//	int **mas = new int*[N];
//	for (int i = 0; i < N; ++i) {
//		mas[i] = new int[M];
//	}
//	int min_val = INT_MAX, max_val = INT_MIN;
//	for (int i = 0; i < N; ++i) {
//		for (int j = 0; j < M; ++j) {
//			cin >> mas[i][j];
//			if (min_val > mas[i][j]) min_val = mas[i][j];
//			if (max_val < mas[i][j]) max_val = mas[i][j];
//		}
//	}
//	cout << "Данная матрица: \n";
//	for (int i = 0; i < N; ++i) {
//		for (int j = 0; j < M; ++j) {
//			cout << mas[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << "Максимум и минимум: \n" << max_val << "\n" << min_val;
//
//	for (int i = 0; i < N; ++i) delete [] mas[i];
//	delete[] mas;
//}

// #2

//int main() {
//	setlocale(LC_ALL, "ru");
//	int N, M;
//	cin >> N >> M;
//	int **mas = new int*[N];
//
//	int max_N = N, max_M = M;
//	int maxline = 0, minline = 0, maxcl = 0, mincl = 0;
//
//	for (int i = 0; i < N; ++i) {
//		mas[i] = new int[M];
//	}
//	int min_val = INT_MAX, max_val = INT_MIN;
//	for (int i = 0; i < N; ++i) {
//		for (int j = 0; j < M; ++j) {
//			cin >> mas[i][j];
//			if (min_val > mas[i][j]) {
//				min_val = mas[i][j];
//				minline = i;
//				mincl = j;
//			}
//			if (max_val < mas[i][j]) {
//				max_val = mas[i][j];
//				maxline = i;
//				maxcl = j;
//			}
//		}
//	}
//	cout << "Данная матрица: \n";
//	for (int i = 0; i < N; ++i) {
//		for (int j = 0; j < M; ++j) {
//			cout << mas[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << "Максимум и минимум: \n" << max_val << "\n" << min_val << "\n";
//	cout << "Позиция максимума (" << maxline << ", " << maxcl << ")\n";
//	cout << "Позиция минимума (" << minline << ", " << mincl << ")\n";
//
//	for (int i = 0; i < N; ++i) delete [] mas[i];
//	delete[] mas;
//}

// #3 формулировка та же как и в 2 задаче


// #4
//int main() {
//	int N, M;
//	cin >> N >> M;
//	int **mas = new int*[N];
//	for (int i = 0; i < N; ++i) {
//		mas[i] = new int[M];
//	}
//	for (int i = 0; i < N; ++i) {
//		for (int j = 0; j < M; ++j) {
//			cin >> mas[i][j];
//		}
//	}
//	for (int i = 0; i < N; ++i) {
//		for (int j = 0; j < M; ++j) {
//			if (i == j) cout << mas[i][j] << " "; // для квадратной матрицы :)
//		}
//		cout << endl;
//		
//	}
//
//
//	for (int i = 0; i < N; ++i) delete [] mas[i];
//	delete[] mas;
//}

// #5

//int main() {
//	int N, M;
//	cin >> N >> M;
//	int **mas = new int*[N];
//	for (int i = 0; i < N; ++i) {
//		mas[i] = new int[M];
//	}
//	for (int i = 0; i < N; ++i) {
//		for (int j = 0; j < M; ++j) {
//			cin >> mas[i][j];
//		}
//	}
//	for (int i = 0; i < N; ++i) {
//		for (int j = 0; j < M; ++j) {
//			if (i + j  == N - 1 ) cout << mas[i][j] << " "; // для квадратной матрицы :)
//		}
//		cout << endl;
//		
//	}
//
//
//	for (int i = 0; i < N; ++i) delete [] mas[i];
//	delete[] mas;
//}

// примечание: матрицы в задачах 4 и 5 квадратные NxN можно было оставить только N

// file 2
// #1

//int main() {
//	setlocale(LC_ALL, "RU");
//	int N;
//	cin >> N;
//	int **mas = new int*[N];
//	for (int i = 0; i < N; ++i) {
//		mas[i] = new int[N];
//	}
//	for (int i = 0; i < N; ++i) {
//		for (int j = 0; j < N; ++j) {
//			cin >> mas[i][j];
//		}
//	}
//	cout << "Данная матрица: \n";
//	for (int i = 0; i < N; ++i) {
//		for (int j = 0; j < N; ++j) {
//			cout << mas[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << "Побочная транспонированная матрица: \n";
//	for (int i = 0; i < N-1; ++i) {
//		for (int j = 0; j < (N - 1) - i; ++j) {
//			swap(mas[i][j], mas[(N - 1) - j][(N - 1) - i]);
//		}
//	}
//	for (int i = 0; i < N; ++i) {
//		for (int j = 0; j < N; ++j) {
//			cout << mas[i][j] << " ";
//		}
//		cout << endl;
//	}
//	for (int i = 0; i < N; ++i) delete [] mas[i];
//	delete [] mas;
//}

// #2 // Алгоритм верный, но при вводе чисел непонятно распределяет числа
//int main() {
//	setlocale(LC_ALL, "RU");
//	int N, M;
//	cin >> N >> M;
//	int **mas = new int*[N];
//
//	int pos1, pos2;
//	cin >> pos1 >> pos2;
//	for (int i = 0; i < N; i++) {
//		mas[i] = new int[M];
//	}
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> mas[i][j];
//		}
//	}
//	cout << "Данная матрица: \n";
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cout << mas[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << "Swap матрица: \n";
//	for (int j = 0; j < M; ++j) {
//		//swap(mas[pos1][j], mas[pos2][j]);
//		int temp = mas[pos1][j];
//		mas[pos1][j] = mas[pos2][j];
//		mas[pos2][j]=temp;
//	}
//	for (int i = 0; i < N; ++i) {
//		for (int j = 0; j < M; ++j) {
//			cout << mas[i][j] << " ";
//		}
//		cout << endl;
//	}
//	for (int i = 0; i < N; ++i) delete [] mas[i];
//	delete [] mas;
//
//	return 0;
//}

// #3
//int main() {
//	setlocale(LC_ALL, "RU");
//	int N;
//	cin >> N;
//	int **mas = new int*[N];
//
//
//	for (int i = 0; i < N; i++) {
//		mas[i] = new int[N];
//	}
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> mas[i][j];
//		}
//	}
//	cout << "Данная матрица: \n";
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cout << mas[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << "Swap матрица: \n";
//	for (int i = 0; i < N; ++i) {
//
//			swap(mas[0][i], mas[i][0]);
//			//int temp = mas[0][i];
//			//mas[0][i] = mas[i][0];
//			//mas[i][0] = temp;
//	}
//	for (int i = 0; i < N; ++i) {
//		for (int j = 0; j < N; ++j) {
//			cout << mas[i][j] << " ";
//		}
//		cout << endl;
//	}
//	for (int i = 0; i < N; ++i) delete [] mas[i];
//	delete [] mas;
//
//	return 0;
//}

// #4

//int main() {
//	setlocale(LC_ALL, "RU");
//	int n;
//	cin >> n;
//	int* a = new int[n];
//	for (int i = 0; i < n; ++i) cin >> a[i];
//	int N, M;
//	cin >> N >> M;
//	if (N * M == n) {
//		int** mas = new int* [N];
//		for (int i = 0; i < N; ++i) {
//			mas[i] = new int[M];
//		}
//		for (int i = 0; i < N; ++i) {
//			for (int j = 0; j < M; ++j) {
//				mas[i][j] = a[i * M + j];
//			}
//		}
//		for (int i = 0; i < N; ++i) {
//			for (int j = 0; j < M; ++j) {
//				cout << mas[i][j] << " ";
//			}
//			cout << endl;
//		}
//		for (int i = 0; i < N; ++i) delete[] mas[i];
//		delete[] mas;
//	}
//	else {
//		cout << "N И M НЕ РАВНЫ n";
//	}
//	return 0;
//}

// #5
//int main() {
//	setlocale(LC_ALL, "RU");
//	int N, M;
//	cin >> N >> M;
//	int** mas = new int* [N];
//	for (int i = 0; i < N; ++i) {
//		mas[i] = new int[M];
//	}
//	for (int i = 0; i < N; ++i) {
//		for (int j = 0; j < M; ++j) {
//			cin >> mas[i][j];
//		}
//	}
//	cout << "Данная матрица: \n";
//	for (int i = 0; i < N; ++i) {
//		for (int j = 0; j < M; ++j) {
//			cout << mas[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << "Swap матрица: \n";
//	int l = 0, r = M - 1;
//	for (int i = 0; i < N; ++i) {
//		if (i % 2 != 0) {
//			while (l < r) {
//				swap(mas[i][l], mas[i][r]);
//				++l;
//				--r;
//			}
//		}
//	}
//	for (int i = 0; i < N; ++i) {
//		for (int j = 0; j < M; ++j) {
//			cout << mas[i][j] << " ";
//		}
//		cout << endl;
//	}
//	for (int i = 0; i < N; ++i) delete[] mas[i];
//	delete[] mas;
//}

// #6

int main() {
	setlocale(LC_ALL, "RU");
	int N;
	cin >> N;
	int **mas = new int*[N];
	for (int i = 0; i < N; ++i) {
		mas[i] = new int[N];
	}
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			cin >> mas[i][j];
		}
	}
	cout << "Данная матрица: \n";
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}
	int SumMatrix = 0;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			if (i == j && i + j == N - 1) {
				int pos1 = i+1;
				while (pos1 < N) {
					SumMatrix += mas[pos1][j];
					pos1++;
				}
			}
		}
	}
	cout << "\n" << SumMatrix << '\n';

	for (int i = 0; i < N; ++i) delete [] mas[i];
	delete[] mas;
}

