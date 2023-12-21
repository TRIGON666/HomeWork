#include <iostream>
#include <algorithm>
#include <windows.h>

using namespace std;


int fibonachi(int n) {
	
	if (n >= 1) {
		int prev_prev = 0, prev = 1, cur;
		for (int i = 1; i < n; ++i) {
			cur = prev + prev_prev;
			prev_prev = prev;
			prev = cur;

		}
		return cur;
	}
	else {
		return 0;
	}
	
}

void SortArray(int* mas, int i, int j, int size) {
	int s = min(i, j) + 1;
	int e = max(i, j);
	sort(mas + s, mas + e);
	for (int z = 0; z < size; z++) {
		cout << mas[z] << " ";
	}
	cout << endl;
}

void Reverse(int* mas2, int i1, int j1, int len) {
	int s = min(i1, j1);
	int e = max(i1, j1);
	while (s < e) {
		swap(mas2[s], mas2[e]);
		s++;
		e--;
	}
}


void DeleteWord(const int N, char* text, const char* word,int s,int e) {
	int len = strlen(word);
	char* ptr = strstr(text, word);
	if (ptr != nullptr) {
		int s = ptr - text;
		int e = s + len - 1;
		int i = s;
		while (text[e] != '\0') {
			text[i] = text[e + 1];
			i++;
			e++;
		}
		text[i] = '\0';
	}
}

void SortArrPlusPlus(int n, int m, int* a, int* b, int* sortMas) {
	int i = 0, j = 0, k = 0;
	while (i < n && j < m)
	{
		if (a[i] < b[j])
		{
			sortMas[k] = a[i];
			i++;
		}
		else
		{
			sortMas[k] = b[j];
			j++;
		}
		k++;
	}
	while (i < n)
	{
		sortMas[k] = a[i];
		i++;
		k++;
	}
	while (j < m)
	{
		sortMas[k] = b[j];
		j++;
		k++;
	}
}

int countWords(const int N1, char* text1) {
	int count = 0;
	bool check = false;

	while (*text1) {
		if (*text1 == ' ') {
			check = false;
		}
		else if (!check) {
			check = true;
			count++;
		}
		text1++;
	}
	return count;
}

int cmas(int arr[], int sd, int d) {
	int count1 = 0;
	for (int i = 0; i < sd; i++) {
		if (arr[i] == d) {
			count1++;
		}
	}
	return count1;
}

int cdoublemas(int** arr1, int r, int c, int d1) {
	int count2 = 0;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (arr1[i][j] == d1) {
				count2++;
			}
		}
	}
	return count2;
}


int* minV(int** arr2, int r1, int c1) {
	int* minV1 = new int[r1];
	for (int i = 0; i < r1; i++) {
		int min = arr2[i][0];
		for (int j = 1; j < c1; j++) {
			if (arr2[i][j] < min) {
				min = arr2[i][j];
			}
		}
		minV1[i] = min;
	}
	return minV1;
}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "RU");

	cout << "1. Для заданного числа n реализовать функцию нахождения числа Фибоначчи с этим номером. \n Напечатать это число.Числа Фибоначчи(в классическом варианте) \n";
	int n;
	cin >> n;
	cout << fibonachi(n) << " <--- it number Fibonachi \n";


	cout << "2. Имеется одномерный массив размера N. С клавиатуры вводятся номера элементов i и j. \n Написать функцию, которая отсортирует элементы между элементами с номерами i и j. \n";
	int size, i, j;
	cin >> size >> i >> j;
	int* mas = new int[size];
	for (int k = 0; k < size; k++) {
		cin >> mas[k];
	}
	SortArray(mas, i, j, size);


	cout << "3. Имеется одномерный массив размерна N. С клавиатуры вводятся номера элементов i и j. \n Написать функцию, которая инвертирует расположение элементов между элементами сномерами i и j.\n";
	int len, i1, j1;
	cin >> len >> i1 >> j1;
	int* mas2 = new int[size];
	for (int k = 0; k < len; k++) {
		cin >> mas2[k];
	}
	Reverse(mas2, i1, j1, len);
	for (int k = 0; k < len; k++) {
		cout << mas2[k] << " ";

	}
	cout << endl;

	cout << "5. Написать функцию, которая удалить все вхождения заданного слова из текста. Текст и слово вводятся с клавиатуры. \n";
	const int N = 1000;
	char text[N];
	char word[N];
	
	cin.getline(text, N);
	cin.getline(word, N);
	int s = 0, e = 0;
	DeleteWord(N, text, word, s, e);
	cout << text << endl;
	
	cout << "1 Написать функцию для слияния двух упорядоченных массивов. Параметры – сами массивы и их размеры.\n";
    int n, m;
    cin >> n >> m;
    int* a = new int[n];
    int* b = new int[m];
    int* sortMas = new int[n + m];
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < m; ++i) cin >> b[i];
	SortArrPlusPlus(n, m, a, b, sortMas);
    for (int i = 0; i < n + m; ++i) cout << sortMas[i] << " ";
	cout << endl;

	cout << "2 Написать функцию для вычисления количества слов в тексте. Параметр – строка, содержащая текст из последовательности слов. \n";

	const int N1 = 1000;
	char text1[N1];
	cin.getline(text1, N1);
	cout << "Кол-во: " << countWords(N1, text1) << endl;

	cout << "3 Написать функцию подсчета количества элементов в одномерном массиве, равных заданному числу d.\n";
	int sd;
	cin >> sd;
	int* arr = new int[sd];
	for (int i = 0; i < sd; ++i) cin >> arr[i];
	int d;
	cin >> d;
	cout << "кОЛ-ВО " << d << ": " << cmas(arr, sd, d) << endl;
	cout << "4 Написать функцию подсчета количества элементов в двумерном массиве, равных заданному числу d.\n";
	int r, c, d1;
	cin >> r >> c;
	int** arr1 = new int* [r];
	for (int i = 0; i < r; ++i) {
		arr1[i] = new int[c];
	}
	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) cin >> arr1[i][j];
	}
	cin >> d1;
	int f = cdoublemas(arr1, r, c, d1);
	cout << "КОЛ ВО " << d1 << ": " << f << endl;
	for (int i = 0; i < r; i++) {
		delete[] arr1[i];
	}
	delete[] arr1;
	
	cout << "5 Дан двумерный массив. Написать функцию формирования одномерного массива, \n элементами которого являются минимальные значения каждой строки исходного двумерного массива.\n";
	// неверный вывод (1, 4 , 7) не знаю почему
	int r1, c1;
	cin >> r1 >> c1;
	int** arr2 = new int* [r1];
	for (int i = 0; i < r1; i++) {
		arr2[i] = new int[c1];
	}
	for (int i = 0; i < r1; ++i) {
		for (int j = 0; j < c1; ++j) cin >> arr2[i][j];
	}
	int* minV2 = minV(arr2, r1, c1);
	cout << "Mинимальное значение: ";
	for (int i = 0; i < r1; i++) {
		cout << minV2[i] << " ";
	}
	for (int i = 0; i < r1; i++) {
		delete[] arr2[i];
	}
	delete[] arr2;
	delete[] minV2;

}
