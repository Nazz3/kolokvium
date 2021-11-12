#include <iostream>
 
using namespace std;
 
int main()
{
    int A, B, sum;
    cout << "Введіть діапазон:" << endl;
    cout << "A = ";
    cin >> A;
    cout << "B = ";
    cin >> B;
    sum = 0;
    for (int i = A; i < B + 1; i++)
    {
        sum += i;
    }
    cout << "Сумма чисел від A до B: " << sum << endl;
    system("pause");
    return 0;
}