#include <iostream>

using namespace std;

int main()
{
  /*  int a;
    int b;
    cin >> a;
    cin >> b;
    if ((a%b))
        cout << "no son multiplos" << endl;
    else
        cout << "son multiplos" << endl;
*/


    char var;
    cin >> var;
    cout << var << endl;
    cout << static_cast < int > (var) << endl;
    int valor=static_cast < int > (var);
    if (valor>=65 && valor<=90){
        cout << "es una letra mayuscula" << endl;
        cout << "su letra minus:"<< char(var+32) << endl;
        }
    else if (valor>=97 && valor<=122){
        cout << "es una letra minuscula" << endl;
        cout << "su letra mayus:"<< char(var-32) << endl;
        }
    else
        cout << "no es letra" << endl;

// es o=||
    return 0;
}
