#include <iostream>

using namespace std;
int suma(int *arr, int tam){
    int res=0;
    for(int i=0; i<tam; i++){
        res += *(arr++);
        }
    return res;
}
void inv(int *arr,int tam){
    int *fin=arr+(tam-1);//puntero que apunta al final
    while(arr<fin){//el ultimo puntero suempre es mayor al primero
        int temp=*arr;
        *arr=*fin;
        *fin=temp;
        arr++;
        fin--;
    }
}
void print(int *arr,int tam){
    if(tam==0)
        return;
    cout << *arr++ << " ";
    print(arr,--tam);
}
bool palindrome(int *arr, int tam){
    int *fin=arr+(tam-1);
    while(arr<fin){
        if(*fin-- != *arr++)
            return false;
    }
    return true;
}
int str_len(char *cad){
    int res=0;
    while(*cad++ != '\0')
        res++;
    return res;
}
void str_cpy(char *cad1, char *cad2){
    while(*cad1!='\0'){
        *cad2=*cad1;
        cad2++;
        cad1++;
    }

}

int main()
{
    int arr[]={4,2,10,30,20};
    int *ptr=arr;
    /*cout << *ptr << endl;
    cout << *(ptr+3) << endl;
    cout << *arr << endl;
    ptr++;
    cout << *ptr << endl;
    cout << ptr << endl;
    cout << arr << endl;*/
    cout << suma(arr,5) << endl;
    inv(arr,5);
    print(arr,5);
    cout << endl;
    cout << palindrome(arr,5) << endl;
    char cadena[]="golaso";
    cout << str_len(cadena) << endl;
    char cadena1[]={"hola"};
    char cadena2[20];
    str_cpy(cadena1,cadena2);
    cout << cadena2 << endl;
}

