#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Rus");
    //5

    //1)
    /*int y = 5, n = 9;
    float t = -7.4, w, s;
    float nums[3] = { 0.5, 8.3, 0.3 };

    for (int num = 0; num <= 2; num++) {
        w = 0.6 * nums[num] + exp(t * nums[num]) * pow(4 * y * n, 2);
        s = sqrt(w - 0.1 * t) / (2 + pow(n, 2));
        cout << w << "   " << s << endl;
    }*/

    //2)

    /*float j = 0, w, s, t = -7.4;
    int y = 5, n = 9;

    while(j <= 2){
        w = 0.6 * j + exp(t * j) * pow(4 * y * n, 2);
        s = sqrt(w - 0.1 * t) / (2 + pow(n, 2));
        cout << w << "   " << s << endl;
        j += 0.1;
    }*/

    //3)

    /*float y[3] = { 0.1, -3, 0.5 };
    int n = 9;
    float t = -7.4, w, s;

    for (int j = 0.1; j <= 0.4; j++) {
        for (int i = 0; i <= 3; i++) {
            w = 0.6 * j + exp(t * j) * pow(4 * y[i] * n, 2);
            s = sqrt(w - 0.1 * t) / (2 + pow(n, 2));
            cout << w << "   " << s << endl;
        }
    }*/


    //+++++++++

    //Торговая фирма в первый день работы реализовала товаров на P тыс. руб., а затем ежедневно увеличивала выручку на 3%. Какой будет 
    //выручка фирмы в тот день, когда она впервые превысит заданное значение Q? Сколько дней придется торговать фирме для достижения этого результата?

    /*float moneyPerDay = 0, earnings = 0, allMoney = 0;
    int days = 0;
    cout << "Введите выручку в первый день" << endl;
    cin >> moneyPerDay;
    cout << "Введите сколько нужно заработать" << endl;
    cin >> allMoney;
    while(earnings <= allMoney){
        earnings += moneyPerDay;
        moneyPerDay = moneyPerDay + (moneyPerDay * 0.03);
        days += 1;
    }

    cout << days << endl;*/



    //Дана  непустая последовательность ненулевых целых чисел, за которой следует 0.  Определить, сколько раз в этой по - следовательности меняется знак.
    /*int x = 1;
    int prevX = 0;
    int countChanges = 0;
    cout << "Введите последовательность чисел" << endl;
    while (true) {
        cin >> x;
        if (x != 0) {
            if (x < 0) {
                if (prevX > 0) {
                    countChanges += 1;
                }
            }
            else if (x > 0) {
                if (prevX < 0) {
                    countChanges += 1;
                }
            }
            prevX = x;
        }
        else {
            cout << "   " << countChanges << endl;
            break;
        }
        
        
    }*/
    



    //Выполнить задание без хранения последовательностей. Дано  натуральное  k . Определить k-ю цифру  последовательности: 1248163264..., в которой выписаны подряд степени 2.

    /*int k = 0, num = 0;
    cout << "Введите k" << endl;
    cin >> k;
    if (k == 1) {
        cout << k << endl;
        return 0;
    }
    else {
        num = pow(2, k);
        cout << num << endl;
        return 0;
    }*/

}


