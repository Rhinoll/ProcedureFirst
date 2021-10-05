// Первое задание Гусаров Андрей.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

string first() {
    return "Мое имя Андрей";
}
int secondSum(int a, int b) {
    return a + b;
}
int secondMinus(int e, int f) {
    return e - f;
}
int secondProis(int c, int d) {
    return c * d;
}
double secondDel(double k, double h) {
    return k / h;
}
double third(double b, double c) {
    return (-c / b);
}
double fouth(double a, double b, double c, bool ans) {
    double dis = (pow(b, 2) - 4 * a * c);
    if (dis < 0) throw new exception;
    if (ans) return ((-b + sqrt(dis)) / 2 * a);
    return ((-b - sqrt(dis)) / 2 * a);
}
int main()
{
    setlocale(LC_ALL, "RUS");

    cout << first() << endl;

    int num1, num2;
    cout << "Введите два числа для сложения: " << '\n';
    cin >> num1 >> num2;
    cout << "Сумма чисел: ";
    cout << secondSum(num1, num2) << '\n';

    int num3, num4;
    cout << "Введите два числа для вычитания: " << '\n';
    cin >> num3 >> num4;
    cout << "Разность чисел: ";
    cout << secondMinus(num3, num4) << '\n';

    int num5, num6;
    std::cout << "Введите два числа для перемножения: " << '\n';
    std::cin >> num5 >> num6;
    std::cout << "Произведение чисел: ";
    std::cout << secondProis(num5, num6) << '\n';

    double num7, num8;
    std::cout << "Введите два числа для деления: " << '\n';
    std::cin >> num7 >> num8;
    std::cout << "Разность чисел: ";
    std::cout << secondDel(num7, num8) << '\n';

    double num9, num10;
    cout << "Введите два числа: " << '\n';
    cin >> num9 >> num10;
    cout << "Неизвестное равное: " << third(num9, num10);
    
    double num11, num12, num13;
    cout << "Введите A, B, C: " << '\n';
    cin >> num11 >> num12 >> num13;
    double x1 = fouth(num11, num12, num13, true);
    double x2 = fouth(num11, num12, num13, false);
    if (x1 == x2) cout << ("x is: ") << x1;
    else cout << "x1 is: " << x1 << '\t'<< "x2 is: " << x2;
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"
// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.