/*
#include<iostream>

using namespace std;
int main() {
	int a, b;
	cout << "몇개의 정수를 입력합니까?";
	cin >> a;
	int* p = new int[a];
	for (int i = 0; i < a; i++) {
		cout << "정수를 입력하시오";
		cin >> b;
		p[i] = b;
	}
	cout << "입력된 정수는: ";
	for (int j = 0; j < a; j++) {
		cout << p[j] << ", ";
	}

}*/

/*
#include<iostream>
#include<string>
using namespace std;
int main() {
	int length;
	string b;
	cout << "얼마나 많은 이름을 입력하시겠습니까?";
	cin >> length;

	string* names = new string[length];
	for (int i = 0; i < length; i++) {
		cout << "이름입력 # " << i + 1 << ": ";
		cin >> b;
		names[i] = b;
	}
	cout << endl;
	cout << "다음은 이름 목록입니다. " << endl;
	for (int j = 0; j < length; j++) {
		cout << "이름입력 # " << j + 1 << ": " << names[j] << endl;

	}
}*/
