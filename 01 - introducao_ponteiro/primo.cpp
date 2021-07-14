#include <iostream>
using namespace std;

bool primo (int n){
    int i;
    for (i = 2; i < n; i++) {
        if(n % i == 0)
            return false;
    }
    return true;
}

int main(){
    int a = 0;
    int b = 0;

    cin >> a;
    cin >> b;
    

    for (int n = a; n <= b;n++) {
        if(primo(n))
            cout << n << endl;
    }

    return 0;
}