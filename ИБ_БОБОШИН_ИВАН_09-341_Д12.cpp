
#include <iostream>
using namespace std;

void printGlobalSideUP(int** arr, int n) {
	for (int i = 0; i < n / 2; ++i) {
		for (int j = i + 1; j < n - 1 - i; ++j) cout << arr[i][j] << "\t";
	}
}


void printGlobalSideDOWN(int** arr, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) if (i > j && i > n - j - 1) cout << arr[i][j] << "\t";
    }
}

void printGlobalSideLEFT(int** arr, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) if (i > j && i + j < n - 1) cout << arr[i][j] << "\t";
    }
}

void printGlobalSideRIGHT(int** arr, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) if (i < j && i + j > n - 1) cout << arr[i][j] << "\t";
    }
}

void TransposeNMMN(int** arr, int n, int m) {
    int** Tarray = new int* [m];
    for (int i = 0; i < m; i++) {
        Tarray[i] = new int[n];
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) Tarray[i][j] = arr[j][i];
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) cout << Tarray[i][j] << "\t";
        cout << endl;
        for (int i = 0; i < m; ++i) {
            delete[] Tarray[i];
        }
        delete[] Tarray;
    }
}
void Proiz(int **A, int **B, int **C, int N, int M, int K) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < K; ++j) {
            C[i][j] = 0;
            for (int k = 0; k < M; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < K; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}

void detA(int** arr) {
    int det = 0;

    det = arr[0][0] * (arr[1][1] * arr[2][2] - arr[1][2] * arr[2][1]) -
        arr[0][1] * (arr[1][0] * arr[2][2] - arr[1][2] * arr[2][0]) +
        arr[0][2] * (arr[1][0] * arr[2][1] - arr[1][1] * arr[2][0]);

    cout << det << endl;
}

int main()
{
    int n;
    cin >> n;
    int** arr = new int* [n];
    for (int i = 0; i < n; ++i) arr[i] = new int[n];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) cin >> arr[i][j];
    cout << endl;
    printGlobalSideUP(arr, n);
    cout << endl;
    printGlobalSideDOWN(arr, n);
    cout << endl;
    printGlobalSideLEFT(arr, n);
    cout << endl;
    printGlobalSideRIGHT(arr, n);
    cout << endl;
    delete[] arr;

    int N, M;
    cin >> N >> M;
    int** array = new int* [N];

    for (int i = 0; i < M; ++i) array[i] = new int[M];

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j) cin >> array[i][j];
    TransposeNMMN(array, N, M);
    for (int i = 0; i < N; ++i) {
        delete[] array[i];
    }
    delete[] array;

   int N, M, K;
   cin >> N >> M >> K;
   int** A = new int* [N];
   int** B = new int* [M];
   int** C = new int* [N];
   for (int i = 0; i < N; ++i) {
       A[i] = new int[M];
       C[i] = new int[K];
   }
   for (int i = 0; i < M; ++i) B[i] = new int[K];

   for (int i = 0; i < N; ++i) 
       for (int j = 0; j < M; ++j) cin >> A[i][j];

   for (int i = 0; i < M; ++i) 
       for (int j = 0; j < K; ++j) cin >> B[i][j];

   Proiz(A, B, C, N, M, K);

   for (int i = 0; i < N; ++i) {
       delete[] A[i];
       delete[] C[i];
   }
   for (int i = 0; i < M; ++i) {
       delete[] B[i];
   }
   delete[] A;
   delete[] B;
   delete[] C;

    int** detarra = new int* [3];
    for (int i = 0; i < 3; ++i) detarra[i] = new int[3];
    for (int i = 0; i < 3; ++i) 
        for (int j = 0; j < 3; ++j) cin >> detarra[i][j];

    detA(detarra);
    for (int i = 0; i < 3; ++i) delete[] detarra[i];
    delete[] detarra;
}

