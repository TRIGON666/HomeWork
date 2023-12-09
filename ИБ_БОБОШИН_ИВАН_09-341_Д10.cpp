#include <iostream>

using namespace std;
// #1
//int main() {
//	int n, m;
//	cin >> n >> m;
//	int **mas = new int*[n];
//	int** mas2 = new int* [n];
//	int** mas3 = new int* [n];
//	// MATRIX A
//	for (int i = 0; i < n; ++i) {
//		mas[i] = new int[m];
//	}
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < m; ++j) cin >> mas[i][j];
//	}
//	// MATRIX B
//	for (int i = 0; i < n; ++i) {
//		mas2[i] = new int[m];
//	}
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < m; ++j) cin >> mas2[i][j];
//	}
//	// MATRIX C
//	for (int i = 0; i < n; ++i) {
//		mas3[i] = new int[m];
//	}
//	// SUM A + B = C
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < m; ++j) {
//			mas3[i][j] = mas[i][j] + mas2[i][j];
//		}
//	}
//
//	cout << "OUTPUR MATRIX C: \n";
//
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < m; ++j) {
//			cout << mas3[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//#2
//int main() {
//	int n, m, k;
//	cin >> n >> m >> k;
//	int** mas = new int* [n];
//	int** mas2 = new int* [m];
//	int** mas3 = new int* [n];
//	// MATRIX A
//	for (int i = 0; i < n; ++i) {
//		mas[i] = new int[m];
//	}
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < m; ++j) cin >> mas[i][j];
//	}
//	// MATRIX B
//	for (int i = 0; i < n; ++i) {
//		mas2[i] = new int[k];
//	}
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < k; ++j) cin >> mas2[i][j];
//	}
//	// MATRIX C
//	for (int i = 0; i < n; ++i) {
//		mas3[i] = new int[k];
//	}
//	// A*B=C
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < k; ++j) {
//			mas3[i][j] = 0;
//			for (int z = 0; z < m; ++z) {
//				mas3[i][j] += mas[i][z] * mas2[z][j];
//			}
//		}
//	}
//
//	cout << "OUTPUR MATRIX C: \n";
//
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < k; ++j) {
//			cout << mas3[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
// пример ниже можно не смотреть попытка решить меня убила #3
	//int main() {
	//	const int N = 5;
	//	int arr[N][N];
	//	int ibegin = N - 1, ifinish = 0, jstart = 0, jfinish = N - 1, pere = N * N - 1;
	//	while (pere >= 0) {
	//		for (int i = ibegin; ifinish <= i; --i) arr[i][jstart] = pere--;
	//		jstart++;
	//		for (int j = jstart; jfinish >= j; ++j) arr[ifinish][j] = pere--;
	//		ifinish++;
	//		for (int i = ifinish; ibegin >= i; ++i) arr[i][jfinish] = pere--;
	//		jfinish--;
	//		for (int j = jfinish; jstart <= j; --j) arr[ibegin][j] = pere--;
	//		ibegin--;
	//	}
	//	for (int i = 0; i < N; ++i){
	//		for (int j = 0; j < N; ++j) {
	//			cout << arr[i][j] << " ";
	//		}
	//		cout << "\n";
	//	}
	//}
//#1
//int main() {
//	int arr[3][3];
//	for (int i = 0; i < 3; ++i) {
//		for (int j = 0; j < 3; ++j) cin >> arr[i][j];
//	}
//
//	int detA = 0;
//	detA = (arr[0][0] * arr[1][1] * arr[2][2]) +
//		(arr[0][1] * arr[1][2] * arr[2][0]) +
//		(arr[0][2] * arr[1][0] * arr[2][1]) -
//		(arr[0][2] * arr[1][1] * arr[2][0]) -
//		(arr[1][2] * arr[2][1] * arr[0][0]) -
//		(arr[2][2] * arr[0][1] * arr[1][0]);
//	cout << detA;
//
//}
//#2
int main() {
	int arr[3][3];
	int x[3];
	int b[3];
	int arb[3][3];
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) cin >> arr[i][j];
	}

	for (int i = 0; i < 3; ++i) cin >> b[i];

	int deta = 0;
	deta = (arr[0][0] * arr[1][1] * arr[2][2]) +
		(arr[0][1] * arr[1][2] * arr[2][0]) +
		(arr[0][2] * arr[1][0] * arr[2][1]) -
		(arr[0][2] * arr[1][1] * arr[2][0]) -
		(arr[1][2] * arr[2][1] * arr[0][0]) -
		(arr[2][2] * arr[0][1] * arr[1][0]);
	cout << "det A = " << deta << "\n";

	if (deta != 0) {
		for (int i = 0; i < 3; ++ i) {
			for (int j = 0; j < 3; ++j) {
				arb[i][j] = arr[i][j];
			}
		}
		for (int i = 0; i < 3; ++i) {
			for (int j = 0; j < 3; ++j) {
				arb[j][i] = b[j];
			}
			int detx =(arb[0][0] * arb[1][1] * arb[2][2]) +
				(arb[0][1] * arb[1][2] * arb[2][0]) +
				(arb[0][2] * arb[1][0] * arb[2][1]) -
				(arb[0][2] * arb[1][1] * arb[2][0]) -
				(arb[1][2] * arb[2][1] * arb[0][0]) -
				(arb[2][2] * arb[0][1] * arb[1][0]);
			x[i] = detx/deta;
			for (int z = 0; z < 3;++z) arb[z][i] = arr[z][i];
		}
		for (int i = 0; i < 3; ++i) cout << "x[" << i << "] = " << x[i] << "\n";
	}
	
}