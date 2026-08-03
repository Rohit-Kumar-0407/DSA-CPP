#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    for(int j=0; j<n; j++){
        char ch = 'A';
        for(int i=0; i<n; i++){
            cout << ch << " ";
            ch += 1;
        }
        cout << endl;
    }

    return 0;
}