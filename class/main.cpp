#include <iostream>
#include <math.h>
using namespace std;
class punto{
public:
    int x,y;
};
class Vector{
public:
    punto inicio, fin;
};
/*void print(const Vector v){
    cout << "(" << v.inicio.x << "," << v.fin.x << ") ---> (" << v.inicio.y << "," << v.fin.y << ")";
}*/
void print(Vector *v){
    cout << "(" << (*v).inicio.x << "," << (*v).fin.x << ") ---> (" << (*v).inicio.y << "," << (*v).fin.y << ")";
    //tambien se puede utilizar el "v->inicio.x"
}

int modulo(const Vector v){
    int x_=v.fin.x - v.inicio.x;
    int y_=v.fin.y - v.inicio.y;
    return sqrt(pow(x_,2)+pow(y_, 2));
}

int modulo(const Vector arr[]){
    int x_;
    int y_;
    for (int i=0; i<2 ; i++){
        x_=arr[i].fin.x - arr[i].inicio.x;
        y_=arr[i].fin.y - arr[i].inicio.y;
    }
    return sqrt(pow(x_,2)+pow(y_, 2));
}
int main()
{
    Vector v;
    v.inicio.x=1;
    v.inicio.y=2;
    v.fin.x=3;
    v.fin.y=4;

    //print(v);
    cout << endl;

    cout << modulo(v) << endl;

    Vector arr[4];//arreglo de vectorses
    arr[0].inicio.x=1;
    arr[0].fin.x=2;
    arr[1].inicio.y=3;
    arr[1].fin.y=5;

    cout << modulo(arr) << endl;

    Vector *ptrv= &v;
    print(ptrv);
    print(&v);
    return 0;
}
