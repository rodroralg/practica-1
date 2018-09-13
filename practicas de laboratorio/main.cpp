#include <iostream>

using namespace std;

int main()
{
    //practica 1_1
    //problema 1
    int suma=0;
    for (int i=1; i<1000; i++){
        if (i%3==0 || i%5==0){
            suma=suma+i;
        }
    }
    cout << suma;
    cout << endl;
    //problema 2
    int n;
    cout << "ingresar un numero de impares:" << endl;
    cin >> n;
    for (int x=0;x<=n;x++){
        if (x%2!=0 && x<n){
            cout << x << ",";
        }
        if (x==n){
            cout << x << endl;
        }
    }
    //problema 3
    int cont=0,num;
    cout << "ingresa un numero" << endl;
    cin >> num;
    for(int a=1;a<num;a++){
        cont=0;
        for (int b=1;b<a+1;b++){
            if (a%b==0){
                cont++;
            }
        }
        if (cont==2){
            cout << a << " ";
        }
    }
    cout << endl;
    //problema 4
    int nu;
    int sum=0;
    cout << "ingrese un numero para ver si es perfecto:" << endl;
    cin >> nu;
    for (int p=1;p<nu;p++){
        if (nu%p==0){
            sum=sum+p;
        }
    }
    if(sum=nu){
        cout << "es pefecto" << endl;
    }
    else {
        cout << "no es perfecto"<< endl;
    }

    //problema 5
    long numerito;
    int q=2;
    cout << "ingrese numero a descomponer" << endl;
    cin >>numerito;
    while (numerito!=1){
        if (numerito%q==0){
            cout << q << "\t";
            numerito=numerito/q;
        }
        else{
            q=q+1;
        }
    }


    //practica 1_2
    //problema 1
    int anho;
    cout << "ingrese un anho" << endl;
    cin >> anho;
    if (anho%4==0 && anho%100!=0 || anho%400!=0){
        cout <<"es bisiesto" <<endl;
    }
    else {
        cout << "no es bisiesto" << endl;
    }
    //problema 2
    int ndp;
    cout << "ingrese el numero de pares:" << endl;
    cin >> ndp;
    for (int s=1;s<=ndp; s++){
        if (s%2==0 && s<ndp){
            cout << s << ",";
        }
        if (s==ndp){
            cout << s << endl;
        }
    }
    //problema 3
    int f1=1;
    int f2=1;
    int f3=1;
    int valor, contador=3;
    cout << "ingresa la cantidad de numeros fibonacci" << endl;
    cin >> valor;
    cout << f1 << "," << f2 << ",";
    while (valor >=contador){
        f3=f2+f1;
        contador++;
        f1=f2;
        f2=f3;
        cout << f3 << ",";
    }
    if (f3==f3)

    //problema4
    cout << endl;
    int number;
    int ndperfectos;
    int perfecto=0;
    cout << "ingrese un numero para ver si es perfecto:" << endl;
    cin >> ndperfectos;
    for (number=1; number<ndperfectos;number++){
        for (int p=1;p<number;p++){
            if (number%p==0){
                perfecto=perfecto+p;
            }
        }
        cout << perfecto << "," ;
    }
    cout << endl;

    //problema 5
    int conta=0,numo;
    long sumaa=0;
    cout << "ingresa un numero" << endl;
    cin >> numo;
    for(int a=1;a<numo;a++){
        conta=0;
        for (int b=1;b<a+1;b++){
            if (a%b==0){
                conta++;
            }
        }
        if (conta==2){
            sumaa=sumaa+a;
        }
    }
    cout << "la suma es :" << sumaa;


    return 0;
}
