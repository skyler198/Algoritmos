#include <iostream>
using namespace std;

void cambioMonedas(int , int*, int );

int main(){
    int cantidad;
    int monedas[] = {50, 25, 10, 5, 2, 1};
    int n = 6;
	cout << "Escriba la cantidad que desea poner a prueba: ";
	cin >> cantidad;
	cambioMonedas(cantidad, monedas, n);

    return 0;
}

void cambioMonedas(int cantidad, int monedas[], int n) {
    int resultado[n] = {0};

    for (int i = 0; i < n; ++i) {
        resultado[i] = cantidad / monedas[i];
        cantidad = cantidad % monedas[i];
    }

    cout << "Monedas usadas:\n";
    for (int i = 0; i < n; ++i) {
        cout << monedas[i] << ": " << resultado[i] << endl;
    }
}
