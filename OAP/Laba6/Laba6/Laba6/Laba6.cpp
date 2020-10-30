#include <iostream>
using namespace std;

void taskFive() {
    int b = 3, a = 6;
    int i[5] = { 8, 12, 16, 20, 24 };
    double c = 6e-4, t, x;

    for (int q = 0; q < 5; q++) {
        t = a * i[q] / (pow(a, 2) - b) * exp(-a);
        if (t > 5 * c) {
            x = 4.8e-3 + i[q] * a;
        }
        else {
            x = a + pow(i[q], 2) * t;
        }
        cout << t << "   " << x << endl;
    }
}

void taskSix() {
    unsigned n;
    cin >> n;
    for (int a = 1; a <= n; a++) {
        if (n % a == 0) {
            cout << a << endl;
        }
    }
}

void taskSevenTwo() {
    int W = 0, a = 0, b = 0, c = 0, d = 0, R = 100;
    for (a; a <= 2; a++) {
        for (b = 0; b <= 5; b++) {
            for (c = 0; c <= 20; c++) {
                for (d = 0; d <= 50; d++) {
                    if (R == (a * 50 + b * 20 + c * 5 + d * 2))
                        W++;
                }
            }
        }
    }
    cout << W << endl;
}

void taskSevenThree() {
    double c1, c2;
    cin >> c1 >> c2;
    int count = 1;
    while (count <= 12) {
        if (count % 2 == 0) {
            c2 /= 2;
            c1 += c2;
        }
        else {
            c1 /= 2;
            c2 += c1;
        }
        count++;
    }
    cout << "c1: " << c1 << endl << "c2: " << c2 << endl;
}

void taskSevenSix() {
    int n; 
    cin >> n;

    int *a = new int[n + 1];

    for (int i = 0; i <= n; i++) {
        a[i] = i;
    }



    for (int i = 2; i * i <= n; i++){
        if (a[i]) {
            for (int j = i * i; j <= n; j += i) {
                a[j] = 0;
            }
        }
    }

    for (int i = 2; i < n; i++)
    {
        if (a[i])
        {
            cout << a[i] << ' ';
        }
    }
}

int main()
{
    /*taskFive();*/
    /*taskSix();*/
    /*taskSevenTwo();*/
    /*taskSevenThree();*/
    /*taskSevenSix();*/
}


