/* Последняя цифра

Дано натуральное число, выведите его последнюю цифру.

Формат входных данных

На вход дается натуральное число N, не превосходящее 10000.

Формат выходных данных

Выведите одно целое число - ответ на задачу. */ 


#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int a = N%100;
    int c = a%10;
    cout << c << endl;   
    return 0;
}
