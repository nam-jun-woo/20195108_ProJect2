/*#include<iostream>
using namespace std;
int main() {
	string str1;
	string str2;
	cout << "ù ��° ���ڿ�: ";
	cin >> str1;
	cout << "�� ��° ���ڿ�: ";
	cin >> str2;

	if (str1 == str2) {
		cout << "2���� ���ڿ��� �����ϴ�";
	}
	else cout << "2���� ���ڿ��� �ٸ��ϴ�";
}*/
/*
#include<iostream>
#include< math.h>
using namespace std;
int main() {
	int a, b, c;
	int z, x, y;
	;
	for (a = 2; a < 100; a++) {
		for (b = 2; b < 100; b++) {
			for (c = 2; c < 100; c++) {
				x = a * a;
				y = b * b;
				z = c * c;
				if (z == x + y) {
					cout << a << " " << b << " " << c;
					cout << endl;

				}

			}
		}
	}
}*/
/*
#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
	int bets = 0;
	double win = 0;
	int total = 0;
	int w = 0;
	int l = 0;
	cout << "�ʱ� �ݾ�: 50$ " << endl;
	cout << "��ǥ �ݾ�: 250$ " << endl;

	for (int i = 0; i < 1000; i++) {
		int cash = 50;

		while (1) {
			bets++;
			if ((double)rand() / RAND_MAX < 0.5)
				cash++;
			else
				cash--;
			if (cash == 0) {
				l++;
				break;
			}
			else if (cash == 250) {
				w++;
				break;
			}
		}
	}
	cout << "1000������ " << w << "�� �¸�" << endl;
	cout << "�̱�Ȯ�� = " << (double)w / 10 << "%" << endl;
	cout << "��չ���Ƚ�� = " << (double)bets / 1000 << endl;

}

*/
