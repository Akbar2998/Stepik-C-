/* На вход дается натуральное число N. Выведите следующее за ним четное число

Формат входных данных

На вход дается целое положительное число N, не превышающее 10000.

Формат выходных данных

Выведите одно целое число - ответ на задачу.

Sample Input 1:

7

Sample Output 1:

8

Sample Input 2:

8 */


#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    if(N%2 == 0) N = N + 2;
  else N = N + 1;
  cout << N;
    return 0;
}
