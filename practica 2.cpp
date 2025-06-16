
#include <iostream>
#include <string>

using namespace std;

int main() {
    string respuesta;

    cout << "******************************************************************************\n";
    cout << "*************************** Cuestionario literatura **************************\n";
    cout << "******************************************************************************\n";

    cout << "Pregunta 1: ¿Cuál es el lenguaje de programación que estamos usando?\n";
    cout << "a) Python\nb) Java\nc) C++\n";
    cout << "Tu respuesta: ";
    getline(cin, respuesta);

    if (respuesta == "c" || respuesta == "C") {
        cout << "¡Correcto!\n";
    } else {
        cout << "Respuesta incorrecta. La correcta es c) C++.\n";
    }

    cout << "\nPregunta 2: ¿Qué comando se usa para imprimir en consola en C++?\n";
    cout << "a) cout\nb) print\nc) echo\n";
    cout << "Tu respuesta: ";
    getline(cin, respuesta);

    if (respuesta == "a" || respuesta == "A") {
        cout << "¡Correcto!\n";
    } else {
        cout << "Respuesta incorrecta. La correcta es a) cout.\n";
    }

    cout << "Pregunta 3: ¿Cuáles son los cinco géneros literarios?\n";
    cout << "a) narrativo-poético-dramático-satírico-didáctico\nb) épico-narrativo-lírico-sátirico-humorista\nc) lírico-didáctico,narrativo-épico,dramatico\n";
    cout << "Tu respuesta: ";
    getline(cin, respuesta);

    if (respuesta == "c" || respuesta == "C") {
        cout << "¡Correcto!\n";
    } else {
        cout << "Respuesta incorrecta. La correcta es c) C++.\n";
    }

    cout << "\nPregunta 4: ¿Quién escribio la Odisea?\n";
    cout << "a) Homero\nb) Virgilio\nc) Ovidio\n";
    cout << "Tu respuesta: ";
    getline(cin, respuesta);

    if (respuesta == "a" || respuesta == "A") {
        cout << "¡Correcto!\n";
    } else {
        cout << "Respuesta incorrecta. La correcta es a) cout.\n";
    }

    cout << "\nPregunta 5: ¿Quién escribio Cien años de soledad?\n";
    cout << "a) Gabriel Garcia Marquez\nb) Jorge luis Borges\nc) mario bargas llosa\n";
    cout << "Tu respuesta: ";
    getline(cin, respuesta);

    if (respuesta == "a" || respuesta == "A") {
        cout << "¡Correcto!\n";
    } else {
        cout << "Respuesta incorrecta. La correcta es a) cout.\n";
    }

    cout << "\nPregunta 6: ¿Qué caracteriza el genero lírico?\n";
    cout << "a) Expresa sentimientos\nb) Enseña una lección\nc) representa dialogos teatrales\n";
    cout << "Tu respuesta: ";
    getline(cin, respuesta);

    if (respuesta == "a" || respuesta == "A") {
        cout << "¡Correcto!\n";
    } else {
        cout << "Respuesta incorrecta. La correcta es a) cout.\n";
    }
 cout << "\nPregunta 7: ¿Quién escribio Orgullo y Perjuicio?\n";
    cout << "a) Emili Bronte\nb) Jane Austen\nc) Mary Shelley\n";
    cout << "Tu respuesta: ";
    getline(cin, respuesta);

    if (respuesta == "b" || respuesta == "B") {
        cout << "¡Correcto!\n";
    } else {
        cout << "Respuesta incorrecta. La correcta es a) cout.\n";
    }
 cout << "\nPregunta 8: ¿Qué tipo de texto es un cuento?\n";
    cout << "a) un texto largo y complejo\nb) un texto en verso\nc) un texto breve y narrativo\n";
    cout << "Tu respuesta: ";
    getline(cin, respuesta);

    if (respuesta == "c" || respuesta == "C") {
        cout << "¡Correcto!\n";
    } else {
        cout << "Respuesta incorrecta. La correcta es a) cout.\n";
    }
 cout << "\nPregunta 9: ¿Cuál es el genero literario de un poema?\n";
    cout << "a) lírico\nb) narrativo\nc) ensayo\n";
    cout << "Tu respuesta: ";
    getline(cin, respuesta);

    if (respuesta == "a" || respuesta == "A") {
        cout << "¡Correcto!\n";
    } else {
        cout << "Respuesta incorrecta. La correcta es a) cout.\n";
    }

 cout << "\nPregunta 10: ¿Qué es una Novela?\n";
    cout << "a) Un texto en verso\nb) un texto narrativo largo\nc) un texto teatral\n";
    cout << "Tu respuesta: ";
    getline(cin, respuesta);

    if (respuesta == "b" || respuesta == "B") {
        cout << "¡Correcto!\n";
    } else {
        cout << "Respuesta incorrecta. La correcta es a) un texto narrativo largo.\n";
    }

    cout << "*******************************************************************************\n";
    cout << "*************************** Muchas Gracias *************************************\n";
    cout << "******************************************************************************\n";
    
    return 0;
}