#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int sumaInicial = n * (n + 1) / 2;
    int sum = 0;

    for (int i = 0; i < n - 1; i++){
        int x;
        cin >> x;
        sum += x;
    }

    cout << (sumaInicial - sum) << endl;
    return 0;
}
