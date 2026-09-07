#include <iostream>
using namespace std;
int main () {


double numero1, numero2;
int vibb;

cout << "diga o primeiro numero para a operacao \n";
cin >> numero1;
cout << "diga o segundo numero para a operacao \n";
cin >> numero2;
cout << "qual operacao sera realizada?\n";
cout << "adicao (+), digite 1\n\n"
        "subtracao (-), digite 2\n\n"
        "divisao (/), digite 3\n\n"
        "multiplicacao (x), digite 4\n\n";
        cin >> vibb;
        
        if (vibb ==1 ) {
          cout   << "a adicao dos numeros e: " << numero1 + numero2 << "\n";
        } else if (vibb ==2) {
            cout << "a subtracao dos numeros e: " << numero1 - numero2 << "\n";
        } else if (vibb ==3) {
            cout << "a divisao dos numeros e: " << numero1 / numero2 << "\n";
           if (numero2 == 0) {
    cout << "erro, divisao por zero\n";
} else {
    cout << "a divisao dos numeros e: " << numero1 / numero2 << "\n";
}
        } else if (vibb ==4) {
            cout << "a multiplicacao dos numeros e: " << numero1 * numero2 << "\n";
        }
    } 
