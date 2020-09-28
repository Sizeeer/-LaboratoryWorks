#include <iostream>

void main() {

	// Свой вариант(8 и 11)
	/*double x = 0.1, y = 5e-6, s, t;
	int j = 12;
	s = 0.4 * x - 1 / j * tan(y);
	t = s - sin(s);
	std::cout << s << "   " << t;*/
	

	/*double a = 1.5, x = -1.8, z = 15e-9, w, d;
	w = tan(1) * (1 + x) + z - exp(a);
	d = 9 * sqrt(2 - 3 * x) + abs(a + 1);
	std::cout << w << "   " << d;*/

	// Варианты 9 и 12

	/*double c = 1.4, y = 0.5, x = 2e-4, z, u ;
	z = exp(c * x) / y + 3;
	u = sqrt(pow(z, 3) - 0.1 * z);
	std::cout << z << "   " << u;*/

	/*double x = 0.095, r = 5e-7, t, u;
	int k = 6;
	t = tan(x) + r * (1 - log(x));
	u = t / (pow(x, 3) + 1) / (1 - exp(k - 4));
	std::cout << t << "   " << u;*/

	// Варианты 10 и 13

	/*double z = 1.7, a = 4e-8, y, s;
	int m = 3, n = 3;
	y = (z + log(z)) / (exp(-3) + sqrt(a));
	s = (1 + m * n) / log(1 + z);
	std::cout << y << "   " << s;*/

	//double d = 0.5e-8, a = 1.5, t, y;
	//int c = 9, j = 4; // Изменил знак тк было -nan(ind)
	//t = (d * c + a * sqrt(c - 1));
	//y = 0.5 * t / d + exp(a);
	//std::cout << t << "   " << y;

	// Варианты 14 и 1

	/*double b = -8.1, a = 1.5, t = -4e-8, w, s, v;
	int j = 4;
	s = sqrt(t * a / t + 1) + 4 * exp(2 * b);
	w = s * a / (1 + 0.1 * a);
	v = s + j * sqrt(pow(a, 2) + pow(b, 2));
	std::cout << w << "   " << s << "   " << v;*/

	double x = 2e-4, a = 8.1, t, u;
	int k = 4;
	t = k * 2 / a + log(2 + x);
	u = sqrt(k - 1) / (t + 1);
	std::cout << t << "    " << u;

}






