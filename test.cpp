#include <iostream>
#include <set>

using namespace std;

int main() {
	//1.������������
	//ÿһ��Ӯ�����
	int n;
	string a, b;
	cin >> n;
	set<string>A, B;
	while (n) {
		cin >> a >> b;
		A.insert(a);
		A.insert(b);
		B.insert(b);
		n--;
	}
	if (A.size() - B.size() == 1) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}