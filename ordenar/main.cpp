#include <iostream>

using namespace std;
//PUNTEROS A FUNCION

bool ascendente(int i, int j){
    return i>j;
}
bool descendente(int i, int j){
    return i<j;
}
int bubblesort(int as[],const int length, bool (*ptr)(int,int) ){
	int i,j,aux;
	for(i=0;i<length;i++){
		for(j=0;j<length-1;j++){
			if((*ptr)(as[j],as[j+1])){
				aux = as[j];
				as[j] = as[j+1];
				as[j+1] = aux;
			}
		}
	}
}

void print(int as[], int n){
    for(int i=0;i<n;i++){
		cout<<as[i]<<" ";}
		cout<<endl;
}

//OPERADOR NEW
int *funcion(){
    int *pt=new int;//puntero que reserva un espacio en la memoria
    *pt=5;//asigno el "5" al puntero
    return pt;//retorno la direccion del espacio ocupado por "5"
}

int main()
{
    //PUNTEROS A FUNCION
    /*
    bool (*ptr)(int,int);//puntero a funcion
    ptr=descendente;//cambiar entre ascendente o descendente
    int arr[]={64,34,12,56,32,72};
    int n=sizeof(arr)/sizeof(arr[0]);//para sacar el tamaño
    bubblesort(arr,6,ptr);
    print(arr,n);
    */

    //OPERADOR NEW
    /*
    int *pt=funcion();
    cout << *pt << endl;//llamo al valor que esta en el espacio de memoria
    delete pt;
    */
    //
    /*
    int *pt;
    for(int i=0;i<1000000;i++){
        pt=funcion();
        cout << *pt << endl;
        delete pt;
    }*/
    //
    //creadno arreglos de forma dinamica
    int n;
    cout << "cantidad de elementos: ";
    cin >> n;
    int *pt =new int[n];//reserve memoria de un arreglo
    for(int i=0;i<n;i++){
        cin >> pt[i];
    }
    print(pt, n);
    bubblesort(pt,n)
    delete[] pt;//elimino las memorias reservadas del arreglo por eso los []
    return 0;
}
