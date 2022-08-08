#include <iostream>
using namespace std;

class Snack {
private:
	string name; // 필드(클래스 안의 변수)
	int price;
public:
	Snack(string n);  // 생성자
	void setName(string n); // 이런 함수가 밑에 있음
	string getName();
	void setPrice(int n);
	int getPrice();
	void info();
};

Snack::Snack(string n) {//생성자
	name = n;
}


// 메소드(클래스 안의 함수)

// 반환 타입 클래스명::함수명() <-- 이 클래스의 함수다
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
	cout << "과자의 이름은 " << name << "이고, " <<
		"가격은 " << price << "원입니다." << endl;
}

int main() {

	Snack snack1("수미칩"); // 생성자 호출 방법

	//snack1.setName("포카칩");
	snack1.setPrice(1500);
		//snack1.name = "포카칩";

	cout << snack1.getName() << endl;

	snack1.info();

	return 0;
}