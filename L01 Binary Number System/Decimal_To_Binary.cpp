#include <iostream>
using namespace std;

int main()
{
    int deci_num;
    cout << "Enter Decimal Number: ";
    cin >> deci_num;

    int binary_num = 0, pow = 1;
    while (deci_num > 0)
    {
        int rem;
        rem = deci_num % 2;
        deci_num /= 2;
        binary_num += rem * pow;
        pow *= 10;
    }
    cout << "Binary Form is: " << binary_num << endl;
    return 0;
}