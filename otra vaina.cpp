#include <iostream>
using namespace std;
int main()
{
  // listas o arrays. Vector 
  int edad = 18;
  string nombre = "Margarita Lasso";
  int edades [10] = {18, 30, 55, 24, 12, 45, 26, 27, 34, 9};
  string colores [5] = {"Negro", "Azul", "Verde", "Amarillo", "Rojo"};
  cout << "La edad del 5to elemento es: " << colores [4] << endl;
  cout << "El color del 3er elemento es: " << colores [2] << endl;

cout << endl;
cout << "Incremento" << endl;
for(int i = 0; < 10; i++){
  cout << " La edad del elemento " << i << "es: " << edades[i] << endl; 
}
cout << endl; 
cout << "Decremento" << endl;
for(int i = 9; i > -1; i--){
cout << " la edad del elemento " << i << "es: " << edades[i] << endl;
 }
}

