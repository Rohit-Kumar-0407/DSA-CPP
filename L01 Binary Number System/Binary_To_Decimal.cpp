#include <iostream>
#include <string>
using namespace std;

int main()
{
    int binary_num;
    cout << "Enter Binary Number: ";
    cin >> binary_num;

    int deci_num = 0, pow = 1;
    while (binary_num > 0)
    {
        int rem = binary_num % 10;
        binary_num /= 10;
        deci_num += rem * pow;
        pow *= 2;
    }
    cout << "Decimal Number is: " << deci_num << endl;
    return 0;
}