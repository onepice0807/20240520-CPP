#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Monster {
private:
	string _name;
	int _health;
	int _attack;
	int _defense;

public:
	Monster()
		: _name("����"), _health(0), _attack(0), _defense(0)
	{
		cout << "Monster �⺻������ ȣ��" << endl;
	};

	Monster(string name, int health, int attack, int defense)
		: _name(name), _health(health), _attack(attack), _defense(defense)
	{
		cout << _name << "������" << endl;
	}

	~Monster() {
		cout << _name << "�Ҹ���" << endl;
	}

	void Attack() {
		// cout << _name << "�� �����Ѵ�" << endl;
		cout << "�����Ѵ�" << endl;
	}

	void Deffense() {
		cout << _name << "�� ����Ѵ�" << endl;
	}

	void Info() {
		cout << "���͸� : " << _name << endl;
		cout << "����� : " << _health << endl;
		cout << "���ݷ� : " << _attack << endl;
		cout << "���� : " << _defense << endl;
	}
};

int main() {
	// C������ malloc �Լ��� �����޸� ������ �Ҵ� �޽��ϴ�.
	int* pa = (int*)malloc(sizeof(int)); // �����޸� ���� �Ҵ�

	*pa = 200;

	cout << "pa = " << pa << endl;
	cout << "*pa = " << *pa << endl;

	free(pa); // �Ҵ���� �����޸� ������ �ݳ�ó��
	
	// C++������ new �����ڸ� ����ؼ� �����޸� ������ �Ҵ� �޴´�.
	int* pb = new int; // new �����ڸ� ���ؼ� int�� ���� ������ �������� �Ҵ����
	*pb = 43567;

	cout << "pb = " << pb << endl;
	cout << "*pb = " << *pb << endl;

	delete pb; // �����޸� ������ �ݳ�ó��

	cout << "C�� mallo�Լ��� ����Ͽ� Monster ������ü�� ����" << endl;
	Monster* cpmons = (Monster*)malloc(sizeof(Monster));
	cpmons->Attack();
	free(cpmons);
	// C�� �����޸� �Ҵ� �Լ��� ��ü�� �����Ҷ� ������ ȣ���� ���� �ʴ´�.
	// �׷��� C�� �����޸� �Ҵ� �Լ��� ������ü�� �����ϸ� �ȵȴ�.

	cout << "new �����ڷ� ��ü�� ����" << endl;
	// ��ü�� �������� �Ҵ� �������� �ݵ�� new �����ڸ� ����ؾ� �Ѵ�.
	// new �����ڴ� �������� ��ü�� �����Ҷ� �����ڸ� ȣ���Ѵ�.
	// delete �����ڴ� ������ü�� �Ҹ�ó���Ҷ� �Ҹ��ڸ� ȣ���Ѵ�.
	Monster* pMons = new Monster;
	pMons->Attack();
	cout << endl;
	delete pMons;

	pMons = new Monster("�巡��", 100, 30, 20); // ������ü ���� (������ ȣ��)
	pMons->Attack();
	cout << endl;
	pMons->Deffense();
	cout << endl;
	pMons->Info();

	delete pMons; // ������ü ��ȯó�� (�Ҹ��� ȣ��)

	return 0;
}