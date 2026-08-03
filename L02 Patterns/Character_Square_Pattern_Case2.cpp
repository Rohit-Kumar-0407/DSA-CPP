#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    char ch = 'A';
    for(int j=0; j<n; j++){
        for(int i=0; i<n; i++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    return 0;
}