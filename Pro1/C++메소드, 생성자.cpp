#include <iostream>
using namespace std;

class Snack {
private:
	string name; // �ʵ�(Ŭ���� ���� ����)
	int price;
public:
	Snack(string n);  // ������
	void setName(string n); // �̷� �Լ��� �ؿ� ����
	string getName();
	void setPrice(int n);
	int getPrice();
	void info();
};

Snack::Snack(string n) {//������
	name = n;
}


// �޼ҵ�(Ŭ���� ���� �Լ�)

// ��ȯ Ÿ�� Ŭ������::�Լ���() <-- �� Ŭ������ �Լ���
void Snack::setName(string n) {
	name = n;
}

string Snack::getName() {
	return name;
}

void Snack::setPrice(int n) {
	price = n;
}

int Snack::getPrice() {
	return price;
}

void Snack::info() {
	cout << "������ �̸��� " << name << "�̰�, " <<
		"������ " << price << "���Դϴ�." << endl;
}

int main() {

	Snack snack1("����Ĩ"); // ������ ȣ�� ���

	//snack1.setName("��īĨ");
	snack1.setPrice(1500);
		//snack1.name = "��īĨ";

	cout << snack1.getName() << endl;

	snack1.info();

	return 0;
}