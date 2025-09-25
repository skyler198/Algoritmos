#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int mov = 0;
    int punto, reciente;
    cin >> punto;

    for (int i = 1; i < n; i++){
        cin >> reciente;
        if (reciente < punto){
            mov = mov + (punto - reciente);
        } else{
            punto = reciente;
        }
    }

    cout << mov << endl;
    return 0;
}
