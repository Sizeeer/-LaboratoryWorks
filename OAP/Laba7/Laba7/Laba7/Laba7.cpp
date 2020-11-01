#include <iostream>
using namespace std;

void taskFiveDotEight() {

    int n1 = 6, n2 = 5;
    double c = 0.7, a[] = { 3, 12, -4, 6.2, 3, 0.4 }, b[] = { 19, 1, -24, 4.2, 8 }, d = 0, firstSum = 0, secondSum = 0;

    for (int i = 0; i < 6; i++) {
        firstSum += (a[i] - c);
    }
    for (int i = 0; i < 5; i++) {
        secondSum += pow((b[i] - 1), 2);
    }

    d = firstSum - c * secondSum;
    cout << d << endl;
}

void taskFiveDotSeven() {

    int n = 6;
    double a[] = { 0.5, 2, 2.5, 1, 0, 8 }, d = 0,  b[] = { 2.3, 4, 0.5, 2, 3, 9 }, c = 0;

    for (int i = 0; i < 6; i++) {
        c = sqrt(a[i] + b[i]);
        d += (c / i);
        cout << "c" << (i + 1) << "= " << c << endl;
    }

    cout << "d= " << d << endl;

}

void taskFiveDotTwo() {

    int m = 4;
    double c = -0.045, b[] = { 0.9, 0.5, -2, -0.1 }, g = 0, a = 1;

    for (int j = 0; j < m; j++) {
        a *= pow((b[j] + 1), 2);
    }
    g = c * a;
    cout << "g= " << g << endl;
}

void taskFiveDotOne() {

    int n = 5;
    double d = 12.5e-4, a[] = { 0.8, 4, -7, 2, 0.91 }, h = 0;

    for (int i = 0; i < n; i++) {
        h += pow(a[i], 2);
    }

    h += d;
    cout << "h= " << h << endl;

}

void taskFirst() {
    unsigned n;
    int sum = 0;
    while (true) {
        cin >> n;
        if (n != 0) {
            if (n % 2 == 0) {
                sum += n;
            }
        }
        else {
            break;
        }
    }
    cout << sum << endl;
}

void taskSecond() {
    int count = 0, n = 1;
    while (n > 0) {
        cin >> n;
        count += 1;
    }
    cout << "Порядковый номер - " << count << endl;
}

void taskSix() {

    int n = 1, sumPol = 0, proizOtr = 1;
    while (true) {
        cin >> n;
        if (n != 0) {
            if (n > 0) {
                sumPol += n;
            }
            else {
                proizOtr *= n;
            }
        }
        else {
            break;
        }
    }

    cout << "Сумма положительных: " << sumPol << endl;
    cout << "Произведение отрицательных: " << proizOtr << endl;
}

int main()
{
    setlocale(LC_CTYPE, "Rus");
    /*taskFiveDotEight();*/
    /*taskFiveDotSeven();*/
    /*taskFiveDotTwo();*/
    /*taskFiveDotOne();*/
    /*taskFirst();*/
    /*taskSecond();*/
    /*taskSix();*/
}
