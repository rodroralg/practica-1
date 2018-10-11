#include <iostream>

using namespace std;
bool palin(int *strn,int strlen){
    int *aux=strn+strlen-1;
    while(aux>strn){
        if(*aux--!=*strn++)
            return false;
    }
    return true;
}

void swapp(int **ptr1,int **ptr2){
    int temp=**ptr1;
    **ptr1=**ptr2;
    **ptr2=temp;
}

int main()
{
    int x=10;
    int y=20;
    int z=30;
    int *ptr=&x;
    cout << ptr << endl;
    cout << *ptr << endl;
    int **ptr2=&ptr;
    cout << *ptr2 << endl;//apunta a la direccion de memoria
    cout << **ptr2 << endl;//apunta al valor de x

    int strn[]={20,30,12,30,20};
    cout << palin(strn,5) << endl;
    /*
    int a=5;
    int b=8;
    int *ptr3=&a;
    int *ptr4=&b;
    swapp(&ptr3,&ptr4);
    */

    return 0;
}
