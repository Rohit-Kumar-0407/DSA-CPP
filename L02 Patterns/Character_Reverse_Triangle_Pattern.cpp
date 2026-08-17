#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=i; j>=0; j--){
            char ch = 'A';
            ch += j;
            cout << ch << " "; 
        }
        cout << endl;
    }
}