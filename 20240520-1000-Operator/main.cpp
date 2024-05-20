#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

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
		cout << "Monster �⺻ ������" << endl;
	};

	Monster(string name, int health, int attack, int defense)
		: _name(name), _health(health), _attack(attack), _defense(defense)
	{
		cout << _name << "������" << endl;
	}

	~Monster() {
		cout << _name << " �Ҹ���" << endl;
	}

	void Init(string name, int health, int attack, int defense) {
		_name = name;
		_health = health;
		_attack = attack;
		_defense = defense;
	}

	void Attack() {
		cout << _name << "�� �����Ѵ�" << endl;
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

// ��ü �迭
int main() {
	
	// ���� ��ü �迭
	{
		Monster array[10];

		char buff[100];

		for (int i = 0; i < 10; i++) {
			sprintf(buff, "Monster_%d", i);
			array[i].Init(buff, i * 20, i * 3, i * 2);
		}

		for (int i = 0; i < 10; i++) {
			array[i].Info();
		}
	}


	cout << "���� ��ü �迭 ����" << endl;
	// ���� ��ü �迭 ����
	int count = 0;
	char buff[30];

	cout << "������ ������ �������� �Է��ϼ��� : ";
	cin >> count;

	Monster* parray = new Monster[count]; // ���� ��ü �迭 ����

	for (int i = 0; i < count; i++) {
		sprintf(buff, "DynamicArrayMonster_%d", i);
		parray[i].Init(buff, i * 10, i * 4, i * 3);
	}

	for (int i = 0; i < count; i++) {
		parray[i].Info();
	}

	delete[] parray; // �����迭 ��ȯó�� (delete[])
 

	return 0;
}