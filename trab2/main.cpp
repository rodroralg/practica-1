#include <iostream>

using namespace std;

int main()
{
    cout << "Hello\n world!" << endl;
    int number1=0;
    int number2=0;
    int number3=0;
    cout <<"ingresa dos enteros para comparar:" << endl;
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











    return 0;
}
