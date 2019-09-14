#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
using namespace std;
void lectura();
void Busqueda();


void lectura(){
    ifstream archivo;
    string texto;
    string cedula;

    cout<<"digite numero de cedula: ";
    cin>>cedula;
    archivo.open("datos.csv",ios::in);

    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }

    while(getline(archivo,texto)){
        
        if(cedula == texto){ 
            cout<<texto<<endl;
        }
            
    }

    archivo.close();

}

void Busqueda(){

    
}










int main(){
    lectura();

    system("pause");
    return 0;
}
