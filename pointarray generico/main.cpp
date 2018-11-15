#include <iostream>
#include "src\point.cpp"
#include "src\pointarray.cpp"
using namespace std;

int main()
{
    Point<int> p(1,2);
    Point<int> q(4,5);
    Point<int> r(6,3);
    Point<int>arr[]={p,q,r};
    int size=sizeof(arr)/sizeof(arr[0]);

    PointArray<int> pa2(arr,size);

    p.print();
    q.print();
    r.print();
    cout << endl;

    //array

    pa2.print();
    cout<<endl;
    pa2.push_back(q);
    pa2.print();
    cout<<endl;
    pa2.insert(2,r);
    pa2.print();
    cout<<endl;
    pa2.remove(1);
    pa2.print();
    cout<<endl;

    return 0;
}
