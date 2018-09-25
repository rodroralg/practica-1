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
    for (int i=0;i<5;i++){
        cout << sum[i] << " ";
        suma=suma+sum[i];
    }
    return suma;
}

int menor(const int arr[], const int length){

    int men=arr[0];
    for(int i=0;i<length;i++){
        if(arr[i]<men)
            men=arr[i];}
    return men;}
//problema3

//roblemna 4
//ascende
int ascendente( int as[],const int length){
	int i,j,aux;
	for(i=0;i<length;i++){
		for(j=0;j<length-1;j++){
			if(as[j] > as[j+1]){
				aux = as[j];
				as[j] = as[j+1];
				as[j+1] = aux;
			}
		}
	}
	cout<<"ordenados de forma Ascendente: "<<endl;
	for(i=0;i<length;i++){
		cout<<as[i]<<" ";}
		cout<<endl;
}
//desce
int descendente( int des[], const int length){
	int i,j,aux;
	for(i=0;i<length;i++){
		for(j=0;j<length-1;j++){
			if(des[j] < des[j+1]){
				aux = des[j];
				des[j] = des[j+1];
				des[j+1] = aux;
			}
		}
	}
	cout<<"ordenados de forma Descendente: "<<endl;
	for(i=0;i<length;i++){
		cout<<des[i]<<" ";}
		cout<<endl;
}
//problema 5
int invertir(int arr[],int l){

}
//palndrome
bool ispalin(char carac[]){
    for(int x=0; x<(m/2);i++){

    }
}

int main()
{
    char str[]={'h','o','l','a','\0'};
    char stra[]="telosico";
    cout << strlen(str) << endl;
    cout << strlen(stra) << endl;

    //problema1
    int arr[]={1,10,8,6,3};
    cout << "la suma es= " << suma(arr) << endl;
    //problema2
    cout << "el menor es " << menor(arr,3) << endl;
    //problema3
    //pr4
    //as
    ascendente(arr,5);
    descendente(arr,5);

    return 0;
}


