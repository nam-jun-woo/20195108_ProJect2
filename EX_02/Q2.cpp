/*
#include<iostream>
using namespace std;

inline double cacl_volume(double a) {

	return (4.0 / 3.0 * 3.14 * a * a * a);
}
int main() {
	double r = 0;
	cout << "�������� �Է��Ͻÿ�:";
	cin >> r;
	cout << endl;
	cout << "���� ���Ǵ�: " << cacl_volume(r);

}*/
/*
#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
	int dice0, dice1, sum;
	dice0 = rand() % 6 + 1;
	dice1= rand() % 6 + 1;
	sum = dice0 + dice1;
	cout << "����� �ֻ���:  " << dice0 << "+" << dice1 << "=" << sum << endl;
	switch (sum) {
	case 7: case 11: {
		cout << "����ڰ� �̰���ϴ�";
	}
	case 2: case 3: case 12: {
		cout << "����ڰ� �����ϴ�";
	}
	}

}*/

/*
#include<iostream>
using namespace std;
int main() {
	string a;
	int z = 0, x = 0, c = 0;
	cout << "��ȣ�� �Է��Ͻÿ�: ";
	cin >> a;
	for (int i = 0; i < a.size(); i++) {
		switch (a[i]) {
		case '0':case '1':case '2':case '3':case '4':
		case '5':case '6':case '7':case '8':case '9': {
			z++;
			break;
		}
		case 'z':case 'x':case 'c':case 'v':case 'b':case 'n':case 'm':case 'a':case 's':case 'd':
		case 'f':case 'g':case 'h':case 'j':case 'k':case 'l':case 'q':case 'w':case 'e':case 'r':
		case 't':case 'y':case 'u':case 'i':case 'o':case 'p': {
			x++;
			break;
		}
		case 'Z':case 'X':case 'C':case 'V':case 'B':case 'N':case 'M':case 'A':case 'S':case 'D':
		case 'F':case 'G':case 'H':case 'J':case 'K':case 'L':case 'Q':case 'W':case 'E':case 'R':
		case 'T':case 'Y':case 'U':case 'I':case 'O':case 'P': {
			c++;
			break;
		}
		}
	}
	if (z > 0 && x > 0 && c > 0)
		cout << "�����մϴ�";
	else
		cout << "�������� �ʽ��ϴ�";

}
*/

