#include <iostream>

using namespace std;

void swapptr(int *ptr1,int *ptr2){
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
int pot(int * b,int *e){
    int resu=1;
    for (int i=0;i<*e;i++){
        resu=resu * (*b);
    }
    return resu;
}
//puntero año bisiesto
bool anhob(int *anho){
    if (*anho%4==0 && (*anho%100!=0 || *anho%400==0)){
        return true;
    }
    else
        return false;

    /*simplificado en 1 linea:
    return (*anho % 4 ==0 && ((*anho % 100!=0) || (*anho% 400==0)));
    */
}

bool esprim(int *n){
    int a=0;
    for (int i=0;i<(*n+1);i++){
        if (*n%i==0){
            a++;
        }
    }
    return (a==2);
}

int main()
{

    int x=5;
    int y=10;
    swapptr(&x,&y);
    cout << x << " and " << y << endl;
    //potencia
    int b=2;
    int e=6;
    cout << pot(&b,&e) << endl;
    /*pun
    int anho=2016;
    cout << anhob(&anho) << endl;
    */
    //primos
    int n=2;
    cout << esprim(&n) << endl;
    return 0;
}

