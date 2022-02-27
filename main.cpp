#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
class Pizza {
protected:
	string name;
	string base;
	string sauce;
	string toppings;
public:
	void ConfirmOrder() {
		cout << "Confirm your order:";
		cout << "\nname: " + name;
		cout << "\ntype of base: " + base;
		cout << "\ntype of sauce: " + sauce;
		cout << "\ntoppings: " + toppings;
	}
	void prepare() {
		cout << "Preparing " + name;
		cout << "\nTossing base...";
		cout << "\nAdding sauce...";
		cout << "\nAdding toppings: " + toppings;
	}
	void bake() {
		cout << "\nBaking in ";
	}
	void package() {
		cout << "\nPackaging...";
		Sleep(5000);
		cout << "\n\t\tYOUR PIZZA IS READY!!!\n";
	}
};
class CheesePizza : public Pizza {
protected:
	int time;
public:
	CheesePizza() {
		name = "Cheese Pizza";
		base = "Thin base";
		sauce = "Chilly sauce";
		toppings = "mushrooms,onions and bacon";
		time = 15;
	}
	void CookingTime() {
		cout << time << " min";
	}
};
class GreekPizza : public Pizza {
protected:
	int time;
public:
	GreekPizza() {
		name = "Greek Pizza";
		base = "Thin base";
		sauce = "Chilly and Tomato sauce";
		toppings = "mushrooms,onions and bacon";
		time = 12;
	}
	void CookingTime() {
		cout << time << " min";
	}
};
class PeperoniPizza : public Pizza {
protected:
	int time;
public:
	PeperoniPizza() {
		name = "Peperoni Pizza";
		base = "Thick base";
		sauce = "Chilly sauce";
		toppings = "mushrooms, onions, green pepper, red pepper";
		time = 16;
	}
	void CookingTime() {
		cout << time << " min";
	}
};
void menu() {
	int choose;
Order:
	system("cls");
	cout << "What do you want to order ?";
	cout << "\n1 - Cheese Pizza";
	cout << "\n2 - Greek Pizza";
	cout << "\n3 - Peperoni Pizza";
	cout << "\nYour choice: ";
	cin >> choose;
	if (choose == 1) {
		system("cls");
		CheesePizza piz;
		piz.ConfirmOrder();
		int chon;
		cout << "\n1: Yes\n2: No";
		cout << "\nConfirm: ";
		cin >> chon;
		if (chon == 1) {
			system("cls");
			piz.prepare();
			piz.bake();
			piz.CookingTime();
			piz.package();
		}
		else if (chon == 2) {
			cout << "Select pizza again!!!";
			system("pause");
			goto Order;
		}
	}
	else if (choose == 2) {
		system("cls");
		GreekPizza piz;
		piz.ConfirmOrder();
		int chon;
		cout << "\n1: Yes\n2: No";
		cout << "\nConfirm: ";
		cin >> chon;
		if (chon == 1) {
			system("cls");
			piz.prepare();
			piz.bake();
			piz.CookingTime();
			piz.package();
		}
		else if (chon == 2) {
			cout << "Select pizza again!!!";
			system("pause");
			goto Order;
		}
	}
	else if (choose == 3) {
		system("cls");
		PeperoniPizza piz;
		piz.ConfirmOrder();
		int chon;
		cout << "\n1: Yes\n2: No";
		cout << "\nConfirm: ";
		cin >> chon;
		if (chon == 1) {
			system("cls");
			piz.prepare();
			piz.bake();
			piz.CookingTime();
			piz.package();
		}
		else if (chon == 2) {
			cout << "Select pizza again!!!";
			system("pause");
			goto Order;
		}
	}
}
int main() {
	menu();
	system("pause");
	return 0;
}