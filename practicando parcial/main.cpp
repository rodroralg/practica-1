#include <iostream>

using namespace std;
//implemente una funcion para evaluar si un numero es potencia de dos
int potde2(int b){
    int pot=1;
    for (int i=0;i<2;i++){
        pot=pot*b;
    }
    return pot;
}
int ispot(int a){
    (a%2==0)? cout << "multiplo de 2" : cout << "no es multiplo de 2" ;
}
void inver(int arr[], int tam){
    for (int i=0; i<=tam/2 ;i++){
        int aux=arr[i];
        arr[i]=arr[tam-1];
        arr[tam-1]=aux;
        tam-=1;
    }
}
bool ispalin(int arr[], int tam){
    for (int i=0;i<=tam/2 ;i++){
        if (arr[i]==arr[tam-1])
            return true;
        else
            return false;
    tam-=1;
    }
}
void print(int arr[], int tam){
    for(int i=0;i<tam;i++){
        cout << arr[i] << " ";
    }
}


int main()
{
    int arr[]={20,12,40,23,44};
    cout << potde2(3) << endl;
    cout << ispot(4) << endl;
    /*
    int x=0;
    while (true){
        if (x++ >=10)
            break;
        if (x%2)
            continue;
        cout << "x es" << ++x << "\n";
    }
    */
    /*
    int y=5;
    int *ptr=&y;
    int **ptr2=&ptr;
    cout << ptr << endl;
    cout << **ptr2 << endl;
    while (*ptr){
        if (**ptr2){
            cout << **ptr2 << endl;
            break;
        }
        *ptr-=1;
    }
    cout << y << endl;
    */
    inver(arr,5);print(arr,5);
    ispalin(arr,5);
    return 0;
}
