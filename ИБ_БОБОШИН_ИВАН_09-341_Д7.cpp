//// file string1;

#include <iostream>

using namespace std;

// #1

//int main() {
//	setlocale(LC_ALL, "ru");
//	char string;
//	int word = 0;
//	while (cin.get(string) && string != '\n') {
//		char c = string;
//		if (c == '�' || c == '�' || c == '�' || c == '�' || c == '�' || c == '�' || c == '�' || c == '�' || // �������� ������ � ENG ����������
//			c == '�' || c == '�' || c == '�' || c == '�' || c == '�' || c == '�' || c =='�' || c == '�' || // Works only with ENG layout
//			c == 'e' || c == 'y' || c == 'u' || c == 'i' || c == 'o' || c == 'a' ||
//			c == 'E' || c == 'Y' || c == 'U' || c == 'I' || c == 'O' || c == 'A') {
//			word++;
//		}
//	}
//	cout << word;
//}

// #2

//int main() {
//    setlocale(LC_ALL, "RU");
//    char string[255];
//    cin >> string;
//    for (int i = 0; i < strlen(string); ++i) {
//        if ('A' <= string[i] && string[i] <= 'Z') string[i] = string[i] - 'A' + 'a';
//        else string[i] = string[i] - 'a' + 'A';
//        if (192 <= string[i] && string[i] <= 223) string[i] = string[i] - 192 + 224; //  ASCII ������� ����� �������, �� ���-�� �� �����
//        else string[i] = string[i] - 224 + 192;
//    }
//    cout << string;
//}


// #5

int main() {
    setlocale(LC_ALL, "RU"); // ����� �� �� ���� ��� �������� � RUS
    // ������������ ������ ENG, ���� ��� ���� ��������� ������������� ASCII ��� ������ ������� ��� ���������
    char c;
    bool FlagSpace = true;
    while (cin.get(c) && c != '\n') {
        if (c == ' ') {
            if (FlagSpace == false) {
                cout << ' ';
            }
            FlagSpace = true;
        }
        else {
            cout << c;
            FlagSpace = false;
        }
    }
    cout << endl;
}
