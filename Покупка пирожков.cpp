/* Пирожок в столовой стоит A рублей и B копеек. Определите, сколько рублей и копеек нужно заплатить за N пирожков.


Формат входных данных

Программа получает на вход три числа: A, B, N - целые, положительные, не превышают 10000.

Формат выходных данных

Программа должна вывести два числа через пробел: стоимость покупки в рублях и копейках.

Sample Input 1:

10
15
2

Sample Output 1:

20 30
*/

#include <iostream>
using namespace std;
int main() {
    int A , B , N;
    cin >> A >> B >> N;
    int z = (A*100 + B)*N;
    int a = (z-(z%100))/100;
    int b = z%100;
    cout << a <<" " <<b << endl;
        
    return 0;
}




