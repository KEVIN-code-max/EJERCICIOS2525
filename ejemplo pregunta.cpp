#include <iostream>
#include <string>
using namespace std;
int main(){
    string respuesta;
 
    cout << "Pregunta 1: ¿Cuál es el lenguaje de programación que estamos usando?\n";
    cout << "a) Python\nb) Java\nc) C++\n";
    cout << "Tu respuesta: ";
    getline(cin, respuesta);

    if (respuesta == "c" || respuesta == "C") {
        cout << "¡Correcto!\n";
    } else {
        cout << "Respuesta incorrecta. La correcta es c) C++.\n";
    }
}
