#include <iostream>

using namespace std;
/*
 * Ejercicio 1. Escriba un programa que pida dos números A y B e imprima en pantalla el
residuode la división A/B
*/
void ejercicio1();

/*
 * Ejercicio 3. Escriba un programa que pida dos números A y B e imprima en pantalla el mayor.
*/
void ejercicio3();

/*
 * Ejercicio 5. Escriba un programa que pida dos números A y B e imprima en pantalla la división
    A/B con redondeo.
 */
void ejercicio5();

/*
 * Ejercicio 7. Escriba un programa que pida un número N e imprima en pantalla la suma de todos
 * los números entre 0 y N (incluyéndose el mismo).
 */
void ejercicio7();

/*
 * Ejercicio 9. Escriba un programa que pida un número N e imprima el perímetro y área de un
círculo con radio N. Nota: use 3.1416 como una aproximación de pi.
*/
void ejercicio9();

/*
 * Ejercicio 11. Escriba un programa que pida un número N e imprima en pantalla su tabla de mul-
tiplicar hasta 10xN
*/
void ejercicio11();

/*
 * Ejercicio 13. Escriba un programa que pida un número N e imprima todos los divisores de N.
 */
void ejercicio13();

/*
 * Ejercicio 15. Escriba un programa que pida constantemente números hasta que se ingrese el nú-
mero cero e imprima en pantalla la suma de todos los números ingresados.
*/
void ejercicio15();

/*
 * Ejercicio 17. Escriba un programa que pida constantemente números hasta que se ingrese el nú-
mero cero e imprima en pantalla el mayor de todos los números ingresados.
*/
void ejercicio17();

/*
 * Ejercicio 19. Escriba un programa que pida un número N e imprima si es o no un número primo.
 */
void ejercicio19();

/*
 * Ejercicio 21. Escriba un programa que pida un carácter C, si es una letra la debe convertir de
mayúscula a minúscula y viceversa e imprimirla.
*/
void ejerrcicio21();

/*
 * Ejercicio 23. Escriba un programa que pida dos números A y B e imprima en pantalla el mínimo
común múltiplo entre los dos.
9*/
void ejercicio23();

/*
 * Ejercicio 25. Escriba un programa que pida un número N e imprima en pantalla la cantidad de
    dígitos de N.
*/
void ejercicio25();

/*
 * Ejercicio 27. Escriba un programa que actúe como una calculadora con operaciones de suma,
resta, multiplicación y división, el usuario debe ingresar los operandos y la operación a realizar.
*/
void ejercicio27();

/*
 * Ejercicio 29. Escriba un programa que adivine un número A (entre 0 y 100) seleccionado por el
usuario (el número NO se ingresa al programa), el programa imprimirá en pantalla un número B y
el usuario usará los símbolos `>', `<' y `=' para indicarle al programa si B es mayor, menor o igual
que A. El programa imprimira un nuevo número B, con base en simbolo ingresado por el usuario, y
repetira el proceso hasta acertar el número seleccionado por usuario.
*/
void ejercicio29();

int main()
{
    ejercicio3();
    return 0;
}

void ejercicio1()
{
    int a, b;
    cout <<"ingrese dos numeros: ";
    cin >> a >> b;
    cout << "el residuo de la de la division " << a << "/" << b << " es "  << a % b <<  endl;
}
void ejercicio3()
{
    int a, b;
    cout <<"ingrese dos numeros: ";
    cin >> a >> b;
    if (a > b) {
        cout << "El número mayor es: " << a << endl;
    } else if (b > a) {
        cout << "El número mayor es: " << b << endl;
    }
}

