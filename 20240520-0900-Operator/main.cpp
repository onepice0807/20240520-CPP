#include <iostream>

using namespace std;

// ���� -> �޸𸮰���

int global = 0; // �ܺκ���, ��������

// ���ٹ���, ���ӱⰣ
void func(int c) { // �Ű����� : ���ú���, �ڵ�����
	int a = 20; // ���ú���, �ڵ�����

	static int astetic = 20; // ��������, ���ú���
}

class A {
private:
	int _member; // �������
};

int main() {
	int b = 20; // ���ú���(��������), �ڵ�����

	{
		int b = 30;
		int c = 100;

		b = 100;
	}
	// c = 200;

	return 0;
}