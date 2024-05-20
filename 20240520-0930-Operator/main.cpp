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
		: _name("없음"), _health(0), _attack(0), _defense(0)
	{
		cout << "Monster 기본생성자 호출" << endl;
	};

	Monster(string name, int health, int attack, int defense)
		: _name(name), _health(health), _attack(attack), _defense(defense)
	{
		cout << _name << "생성자" << endl;
	}

	~Monster() {
		cout << _name << "소멸자" << endl;
	}

	void Attack() {
		// cout << _name << "이 공격한다" << endl;
		cout << "공격한다" << endl;
	}

	void Deffense() {
		cout << _name << "이 방어한다" << endl;
	}

	void Info() {
		cout << "몬스터명 : " << _name << endl;
		cout << "생명력 : " << _health << endl;
		cout << "공격력 : " << _attack << endl;
		cout << "방어력 : " << _defense << endl;
	}
};

int main() {
	// C언어에서는 malloc 함수로 동적메모리 공간을 할당 받습니다.
	int* pa = (int*)malloc(sizeof(int)); // 동적메모리 공간 할당

	*pa = 200;

	cout << "pa = " << pa << endl;
	cout << "*pa = " << *pa << endl;

	free(pa); // 할당받은 동적메모리 공간을 반납처리
	
	// C++에서는 new 연산자를 사용해서 동적메모리 공간을 할당 받는다.
	int* pb = new int; // new 연산자를 통해서 int형 변수 공간을 동적으로 할당받음
	*pb = 43567;

	cout << "pb = " << pb << endl;
	cout << "*pb = " << *pb << endl;

	delete pb; // 동적메모리 공간을 반납처리

	cout << "C의 mallo함수를 사용하여 Monster 동적객체를 생성" << endl;
	Monster* cpmons = (Monster*)malloc(sizeof(Monster));
	cpmons->Attack();
	free(cpmons);
	// C의 돟적메모리 할당 함수는 객체를 생성할때 생성자 호출을 하지 않는다.
	// 그래서 C의 동적메모리 할당 함수로 동적객체를 생성하면 안된다.

	cout << "new 연산자로 객체를 생성" << endl;
	// 객체를 동적으로 할당 받을때는 반드시 new 연산자를 사용해야 한다.
	// new 연산자는 동적으로 객체를 생성할때 생성자를 호출한다.
	// delete 연산자는 동적객체를 소멸처리할때 소멸자를 호출한다.
	Monster* pMons = new Monster;
	pMons->Attack();
	cout << endl;
	delete pMons;

	pMons = new Monster("드래곤", 100, 30, 20); // 동적객체 생성 (생성자 호출)
	pMons->Attack();
	cout << endl;
	pMons->Deffense();
	cout << endl;
	pMons->Info();

	delete pMons; // 동적객체 반환처리 (소멸자 호출)

	return 0;
}