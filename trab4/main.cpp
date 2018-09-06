#include <iostream>

using namespace std;

int main()
{
    int a=0;
    cout << "entero " << "cuadrado " << "cubo" << endl;
    a=a+1;
    cout << a << "\t" << a*a << "\t" << a*a*a << endl;
    a=a+1;
    cout << a << "\t" << a*a << "\t" << a*a*a << endl;
    a=a+1;
    cout << a << "\t" << a*a << "\t" << a*a*a << endl;
    a=a+1;
    cout << a << "\t" << a*a << "\t" << a*a*a << endl;
    a=a+1;
    cout << a << "\t" << a*a << "\t" << a*a*a << endl;
    a=a+1;
    cout << a << "\t" << a*a << "\t" << a*a*a << endl;
    a=a+1;
    cout << a << "\t" << a*a << "\t" << a*a*a << endl;
    a=a+1;
    cout << a << "\t" << a*a << "\t" << a*a*a << endl;
    a=a+1;


    cout << "usando bucles" << endl;
    for (a=1; a<=10; a=a+1){
        cout << a << "\t" << a*a << "\t" << a*a*a << endl;
    }
    while (a<=10){
        cout << a << "\t" << a*a << "\t" << a*a*a << endl;
        a=a+1;
    }

    cout << "fibonacci" << endl;
    int f_1=1;
    int f_2=1;
    int f_3=1;
    int valor,contador=3;
    cin >> valor;
    while(valor >= contador){
        f_3=f_1+f_2;
        contador++;
        f_1=f_2;
        f_2=f_3;
    }
    cout << f_3 << endl;





    /*for (n=3 ;n>2 ;n-1+n-2);
        cout << n << endl;
    if (n == 0);
        return 0;
    if (n == 1);
        return 1;
*/


    return 0;
}
