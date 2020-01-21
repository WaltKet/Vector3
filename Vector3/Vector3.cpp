// Vector3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Vector3bien.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
class Vector3
{
public:
	int a;
	int b;
	int c;
	float x;

	Vector3(int a, int b, int c)
	{
		this->a = a;
		this->b = b;
		this->c = c;

	}
};
Vector3& operator+(Vector3& p1, Vector3& p2)
{
	return*(new Vector3((p1.a + p2.a), (p1.b + p2.b), (p1.c + p2.c)));
}
Vector3 & operator-(Vector3 & p1, Vector3 & p2)
{
	return*(new Vector3((p1.a - p2.a), (p1.b - p2.b), (p1.c - p2.c)));
}
Vector3 & operator*(Vector3 & p1, float x)
{
	return*(new Vector3((p1.a * x), (p1.b * x), (p1.c * x)));
}
Vector3 operator% (Vector3 & p1, Vector3 & p2)
{
	return*(new Vector3((p1.a * p2.a) + (p1.b * p2.b) + (p1.c * p2.c), 0, 0));
}
int main()
{
	float x = 5;
	Vector3 A(1, 2, 3);
	Vector3 B(1, 2, 3);
	Vector3 G = A + B;
	Vector3 K = A - B;
	Vector3 Z = A * x;
	Vector3 k = A % B;

	std::cout << "Producto Punto = " << k.a << "\n";
	std::cout << "A = " << G.a << ',' << G.b;
	std::cout << ',' << G.c << "\n";
	std::cout << "K = " << K.a << ',' << K.b;
	std::cout << ',' << K.c << ',' << "\n";
	std::cout << "Z = " << Z.a << ',' << Z.b;
	std::cout << ',' << Z.c << "\n";


	return 0;
	std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
