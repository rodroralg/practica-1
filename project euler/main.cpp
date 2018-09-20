#include <iostream>

using namespace std;

int main()
{
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
    long long sumota=0;
    long long f=0;
    long long f1=0;
    long long f2=1;

    while (f<4000000){
        f=f1+f2;
        f1=f2;
        f2=f;
        if (f%2==0)
            sumota=sumota+f;

    }

    cout << sumota;
    cout << endl;

    //problema 3
    long long int numerito = 600851475143;
    int q=2;
    while (q< numerito){
        if (numerito%q==0){
            numerito=numerito/q;
        }
        q++;

    }
    cout << numerito;
    cout << endl;
    //problema 4
    int n1,n2,n3,n4,n5,n6,multi;
    int valor2=999;
    for (int valor=999;valor>=valor2;valor=valor-1){
        multi=valor*valor2;
        n1=multi/100000;
        n2=(multi%100000/10000);
        n3=(multi%100000/1000);
        n4=(multi%100000/100);
        n5=(multi%100000/10);
        n6=multi%10;
        if (n1==n6 && n2==n5 && n3==n4)
            cout << multi << "=" << valor << "*" << valor2;
        else
            valor2=valor2-1;

    }



    /*problema 7
    int cont=0;
    //int num;
    //cout << "ingresa un numero" << endl;
    //cin >> num;
    for(int a=1;a<=10001;a++){
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
    */
    //problema 10
    long long conta=0;
    long long  sumaa=0;

    for(long long a=1;a<2000000;a++){
        conta=0;
        for (long b=1;b<a+1;b++){
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
