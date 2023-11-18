#include <iostream>
#include <Windows.h>
using namespace std;
//file char2
// #1
//int main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	setlocale(LC_ALL, "RU");
//	char word[255];
//	cin.getline(word, 255);
//	int len = strlen(word);
//	for (int i = 0; i < len; ++i) {
//		if (word[i] == ' ') word[i] = '\n';
//	}
//	cout << word;
//}
// #2
//int main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	setlocale(LC_ALL, "RU");
//    const int N = 1000; 
//    char text[N];
//    cin.getline(text, N);
//    int len = strlen(text);
//    int start = 0, lstart = 0, lend = 0;
//
//    for (int i = 0; i <= len; ++i) {
//        if (text[i] == ' ' || text[i] == '\0') { 
//            int count = i - start;
//            if (count > lend) {
//                lstart = start;
//                lend = count;
//            }
//            start = i + 1;  
//        }
//    }
// 
//    for (int i = lstart; i < lstart + lend; ++i) {
//        cout << text[i];
//    }
// 
//}

// #3

//int main() {
//   SetConsoleCP(1251);
//   SetConsoleOutputCP(1251);
//   setlocale(LC_ALL, "RU");
//   const int N = 1000;
//   char string[N];
//   cin.getline(string, N);
//   int max_count = 0, count = 0, i = 0;
//   while (string[i] != '\0') {
//       if (string[i] == '(') {
//           count++;
//           if (count > max_count) max_count = count;
//       }
//       else if (string[i] == ')') {
//           if (count > 0) count--;
//       }
//       i++;
//   }
//    cout << max_count;
//}

// #4
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    setlocale(LC_ALL, "RU");
//    const int N = 1000;
//    char text[N];
//    cin.getline(text, N);
//    int wordNumber;
//    cout << "Номер слова для удаления: ";
//    cin >> wordNumber;
//    int cur = 1;
//    int i = 0;
//    while (text[i] != '\0') {
//        if (text[i] == ' ') {
//            cur++;
//        }
//        if (cur != wordNumber) {
//            cout << text[i];
//        }
//        i++;
//    }
//}

// #5
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    setlocale(LC_ALL, "RU");
//    const int N = 1000;
//    char text[N];
//    char del[N];
//    cin.getline(text, N);
//    cin.getline(del, N);
//    int len_text = strlen(text);
//    int len_del = strlen(del);
//    for (int i = 0; i <= len_text - len_del; ++i) {
//        bool found = true;
//        for (int j = 0; j < len_del; ++j) {
//            if (text[i + j] != del[j]) {
//                found = false;
//                break;
//            }
//        }
//        if (found) {
//            for (int j = i; j < len_text - len_del; ++j) {
//                text[j] = text[j + len_del];
//            }
//            len_text -= len_del;
//            text[len_text] = '\0';
//            i--;
//        }
//    }
//    cout << text;
//}
//file char3

// #1
