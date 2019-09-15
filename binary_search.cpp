#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <vector>

using namespace std;
void lectura();
void Busqueda();


void lectura(){
    ifstream archivo;
    int vector[1000]
    string texto;
    string cedula;
    int tam = 950;
    int centro;
    int inf = 0;
    int sup = tam -1;
    cout<<"digite numero de cedula: ";
    cin>>cedula;
    archivo.open("datos.csv",ios::in);

    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }
    while(getline(archivo, texto)){
        
    }


    while(inf <= sup){
        centro =((sup - inf)/2)+inf;

        
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
