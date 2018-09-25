#include <iostream>

using namespace std;
int strlen(char str[]){
    int x=0;
    for (int i=0;;i++){
        if (str[i]=='\0'){
            break;
        }
        x++;
    }
    return x;
}
//problema 1
int suma(int sum[]){
    int suma=0;
    for (int i=0;i<3;i++){
        cout << sum[i] << " ";
        suma=suma+sum[i];
    }
    return suma;
}
//problema 2
int menor(int men[]){
    int menori=0;
    for (int i;i<4;i++){
        if (men[i]<men[i+1])
            menori=men[i];
    }
    return menori;
}
//problema3
int perfecto(int *arr, int l){
    int sum=0;
    int e;
    int cont=0;
    for (int x=0;x<l;x++){
        e=arr[x];
        sum=0;
        for(int y=0;y<=(e/2);y++){
            if (e%y==0){
                sum=sum +y;
                cout << sum << " " << e << '\n';
            }
        }
        if (sum==e){
            cont=cont+1;
        }
    }
    cout << "la cantidad de num perfectos es: " << cont << '\n';
}

//problema 5
int invertir(int arr[],int l){
    int a;
    int len=1;
    for (int x=0;x<(l/2);x++){
        a=arr[x];
        arr[x]=arr[l-(x+1)];
        arr[l-(x+1)]= a;
        len++;
    }
    for (int x=0;x<1;x++){
        cout << arr[x] << '\t';
    }
}

int main()
{
    char str[]={'h','o','l','a','\0'};
    char stra[]="telosico";
    cout << strlen(str) << endl;
    cout << strlen(stra) << endl;

    //problema1
    int sum[]={1,2,4};
    cout << "la suma es= " << suma(sum) << endl;
    //problema2
    int men[]={4,2,5,3};
    cout << "el menor es " << menor(men) << endl;
    //problema3
    int arr[]={2,3,4};
    cout << perfecto(arr,9) << endl;

    return 0;
}

