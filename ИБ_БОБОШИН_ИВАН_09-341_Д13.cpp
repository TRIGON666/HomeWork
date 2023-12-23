#include <iostream>
#include <Windows.h>

using namespace std;


int MaxR(int* arr, int n)
{
    int a, b;

    a = arr[0];

    if (n == 2)
        b = arr[1];
    else 
        b = MaxR(arr + 1, n - 1);

    if (a > b)
        return a;
    return b;
}


int GCD_R(int a, int b)
{
    if (a == 0 || b == 0)
        return a + b;

    if (a > b)
        return GCD_R(a % b, b);
    else
        return GCD_R(a, b % a);
}


int f(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    if (n % 2 == 0)
        return f(n / 2);
    else
        return f(n / 2) + f(n / 2 + 1);
}


float getDrop(int* a, int* b, int n, int i)
{
    if (i == n)
        return 1.0f;

    return a[i] + b[n - 1 - i] / getDrop(a, b, n, i + 1);
}

void PLUS(int arr1[], int n, int arr2[], int m, int pl[], int ink = 0) {
    if (n == 0 && m == 0) {
        return 0;
    }

    if (n == 0) {
        pl[ink] = arr2[0];
        PLUS (arr1, n, arr2 + 1, m - 1, pl, ink + 1);
    }
    else if (m == 0) {
        pl[ink] = arr1[0];
        PLUS(arr1 + 1, n - 1, arr2, m, pl, ink + 1);
    }
    else {
        if (arr1[0] <= arr2[0]) {
            pl[ink] = arr1[0];
            PLUS(arr1 + 1, n - 1, arr2, m, pl, ink + 1);
        }
        else {
            pl[ink] = arr2[0];
            PLUS(arr1, n, arr2 + 1, m - 1, pl, ink + 1);
        }
    }
}

int cword (char* text) {
    if (*text == '\0') {
        return 0;
    }

    while (*text == ' ') {
        ++text;
    }

    if (*text == '\0') {
        return 0;
    }

    int k = 1;

    while (*text != '\0') {
        if (*text == ' ' && *(text + 1) != ' ') {
            k += cword (text + 1);
            break;
        }
        ++text;
    }

    return k;
}

int cval (int* arr, int n, int d, int ink = 0) {
    if (ink >= n) {
        return 0;
    }
    int ch = (arr[ink] == d) ? 1 : 0;;
    return ch + cval (arr, n, d, ink + 1);
}

int cval2 (int** arr, int n, int m, int d) {
    if (n < 0) {
        return 0;
    }

    int ch = (arr[n][m] == d) ? 1 : 0;
    int nm = m - 1;
    int nn = (nm < 0) ? n - 1 : n;

    if (nm < 0) {
        nm = m;
    }

    return ch + cval2 (arr, nn, nm, d);
}

int main()
{
    SetConsoleCP (1251);
    SetConsoleOutputCP (1251);
    setlocale (LC_ALL, "RU");

    //1

    int n;
    int* myArray;
    int max;

    cin >> n;

    myArray = new int[n];

    for (int i = 0; i < n; i++)
        cin >> myArray[i];

    max = MaxR(myArray, n);

    cout << max;


    //2

    int a, b;

    cin >> a >> b;
    cout << GCD_R(a, b);


    //3

    int n;

    cin >> n;
    cout << f(n);


    //4

    int* a, * b;

    int n;

    cin >> n;

    a = new int[n];
    b = new int[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    cout << getDrop(a, b, n, 0);

    //1

    int n, m;
    cin >> n >> m;
    int* arr1 = new int[n];
    int* arr2 = new int[m];
    for (int i = 0; i < n; ++i) cin >> arr1[i];
    for (int i = 0; i < m; ++i) cin >> arr2[i];
    int nm = n + m;
    int* pl = new int[nm];
    PLUS (arr1, n, arr2, m, pl);
    for (int i = 0; i < nm; ++i) cout << pl[i] << " ";
    cout << endl;
    delete[] arr1;
    delete[] arr2;
    delete[] pl;

    //2

    const int len = 1000;
    char* text = new char[len];
    cin.getline(text, len);

    int k = cword(text);
    cout << k << endl;
    delete[] text;

    //3

    int n, d;
    cin >> n >> d;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i) cin >> arr[i];
    int ch = cval (arr, n, d);
    cout << "Число " << d << " встречается в массиве " << ch << " раз." << endl;
    delete[] arr;


    //4

    int n, m, d;
    cin >> n >> m >> d;
    int** arr = new int* [n];
    for (int i = 0; i < n; ++i) arr[i] = new int[m];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
        }
    }


    int ch = cval2 (arr, n - 1, m - 1, d);
    cout << "Число " << d << " встречается в массиве " << ch << " раз(а)." << endl;
    for (int i = 0; i < n; ++i) delete[] arr[i];
    delete[] arr;
}
