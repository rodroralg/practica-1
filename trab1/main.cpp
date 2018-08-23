#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    int b=12;
    int z=a+b;
    cout << b << endl << z << endl;
    cout << a+b << "=" << a << "+" << b << endl;
    cout << "Hello world!" << endl << "hola" << endl << "Rodrigo" << endl;
    //promedio notas
    cout << "ingresa tus notas:" << endl;
    int nota1;
    int nota2;
    int nota3;
    cin >> nota1;
    cin >> nota2;
    cin >> nota3;
    cout << "tu nota pronedio es: " << (nota1+nota2+nota3)/3 << endl;
    //short int
    short int p = 3766; //tamaño de 2 bytes= 16 beats
    int q = p+1; // 4 bytes
    cout << q << endl;
    q=q+1;
    cout << q << endl;
    //int max
    int t;
    int x=12312312313;
    cout << x << endl;
    t = x - 572589575;
    cout << t << endl;
    return 0;
}
