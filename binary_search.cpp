#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
using namespace std;
void lectura();

void lectura(){
    ifstream archivo;
    string texto;

    archivo.open("datos.csv",ios::in);

    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }

    while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;
    }

    archivo.close();

}










int main(){



    system("pause");
    return 0;
}
