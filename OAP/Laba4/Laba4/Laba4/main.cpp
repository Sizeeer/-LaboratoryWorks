#include <iostream>

using namespace std;

int main()
{
	// 4 задание

		setlocale(LC_CTYPE, "RUS");
		/*int a, b, c;
		cout << " Введите 3 числа : ";
		cin >> a >> b >> c;
		if (a < b && b < c)
			cout << a << " " << b << " " << c;
		else if (a < c && c < b)
			cout << a << " " << c << " " << b;
		else if (b < a && a < c)
			cout << b << " " << a << " " << c;
		else if (b < c && c < a)
			cout << b << " " << c << " " << a;
		else if (c < b && b < a)
			cout << c << " " << b << " " << a;
		else
			cout << c << " " << a << " " << b;
		cout << endl;*/




	// 5 задание

	int num = 1;
	double a1 = 1, a2 = 1, a3 = 1, a4 = 1;
	cout << "Введите число";
	cin >> num;
	a1 = num / 1000;
	a2 = (num % 1000) / 100;
	a3 = (num % 100) / 10;
	a4 = (num % 10);
	if (a1 == a2 && a2 == a3 && a4 == a1 && a1 == a3) {
		cout << "Нет, все цифры одинаковые";
	}
	else {
		cout << "Да, не все цифры различны";
	}

	// задание 6

	/*int answer;
	cout << "Привет. 1-Привет, 2-Хай, 3-Пока" << endl;
	cin >> answer;
	switch (answer) {
	case 1:
		cout << "Как у тебя дела? 1-Все хорошо, у тебя? 2-Неплохо, а у тебя как? 3-Я не хочу сейчас говорить" << endl;
		cin >> answer;
		switch (answer) {
		case 1:
			cout << "Тоже хорошо. Ну ладно, пока)" << endl;
			break;
		case 2:
			cout << "Тоже хорошо. Ну ладно, пока)" << endl;
			break;
		case 3:
			cout << "Ладно, пока(" << endl;
			break;
			break;
		}

	case 2:
		cout << "Хай, как делы? 1-Все нормуль, у тебя? 2-Неплохо, а у тебя как? 3-Я не хочу сейчас говорить" << endl;
		cin >> answer;
		switch (answer) {
		case 1:
			cout << "Тоже хорошо. Ну ладно, пока)" << endl;
			break;
		case 2:
			cout << "Тоже хорошо. Ну ладно, пока)" << endl;
			break;
		case 3:
			cout << "Ладно, пока(" << endl;
			break;
			break;
		}
	case 3:
		cout << "Ладно, пока(" << endl;
		break;
	default:
		cout << ")))))))))" << endl;
		break;
	}*/



}
