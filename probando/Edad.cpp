/*Si fulano tiene X años, éste tendrá Y veces tu edad cuando cumpla Z años, ¿qué edad tienes?*/

#include<iostream>
using namespace std;

int main(){
    int X, Y, Z;
    int b;
    
    cin >> X >> Y >> Z;
    
    b = (Z / Y) - (Z - X);
    
    cout << b << endl;
    
    return 0;
}



