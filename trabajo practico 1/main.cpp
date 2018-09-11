#include <iostream>

using namespace std;

int main()
{
    cout << "Hello\n Rodrigo" << endl;
    //problema 1
    int edad;
    cout << "ingresa tu edad:" << endl;
    cin >> edad;
    if (edad<18)
        cout << "eres menor de edad" << endl;
    else
        cout << "eres mayor de edad" << endl;
    //problema 2
    int ndimpar;
    int i;
    cout << "numeros impares:" << endl;
    cin >> ndimpar;
    for (i=0; i<=2*ndimpar; i=i+1){
        if (i%2!=0){
            cout << i << ",";
        }
    }
    cout << endl;
    //problema 3

    int number1=0;
    int number2=0;
    int number3=0;
    cout <<"ingresa tres enteros para comparar:" << endl;
    cin >> number1 >> number2 >> number3;
    if (number1==number2)
        cout << number1 << "==" << number2 << endl;
    //suma
    cout << "la suma es: "<< (number1+number2+number3) << endl;
    //producto
    cout << "el producto es: "<< (number1*number2*number3) << endl;
    //promedio
    cout << "el promedio es: "<< float((number1+number2+number3)/3.0) << endl;
    //el mayor:
    if (number1>number2 && number1>number3)
        cout << "el mayor numero es:" << number1 << endl;
    else if (number2>number1 && number2>number3)
        cout << "el mayor numero es:" << number2 << endl;
    else
        cout << "el mayor numero es:" << number3 << endl;
    //el menor
    if (number1<number2 && number1<number3)
        cout << "el menor numero es:" << number1 << endl;
    else if (number2<number1 && number2<number3)
        cout << "el menor numero es:" << number2 << endl;
    else
        cout << "el menor numero es:" << number3 << endl;

    //problema 4
    int n1;
    int n2;
    cout << "ingrese dos numeros" << endl;
    cin >> n1;
    cin >> n2;
    if (n1%2==0){
        cout << n1 << " es multiplo de 2" << endl;
    }
    else {
        cout << n1 << " no es multiplo de 2" << endl;
    }
    if (n2%2==0){
        cout << n2 << " es multiplo de 2" << endl;
    }
    else {
        cout << n2 << " no es multiplo de 2" << endl;
    }
    if (float(n1 % n2 ==0)){
        cout << n2 << " es multiplo de " << n1 << endl;
    }
    else {
        cout << n1 << " no es multiplo de " << n2 << endl;
    }
    //problema 5
    int a;
    int numero;
    int cont=0;
    cout << "ingresa un numero"<< endl;
    cin >> numero;
    for (a=1; a<=numero; a++){
        if (numero%a==0){
            cont++;
        }
    }
    if (cont>2){
        cout << "no es primo" << endl;
    }
    else {
        cout << "es primo" << endl;
    }
    //problema 7
    int x=0;
    cout <<"escribe un numero de cinco digitos:" << endl;
    cout <<  << "\t" << x++ << endl;
    return 0;
}
