#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>

using namespace std;

class Persona
{    
    public: 
  
    string nombre, cedula;

    void asignarDatos(string linea) 
    { 
        string delimitador = ";";
        cedula = linea.substr(0, linea.find(delimitador));
        nombre = linea.substr(linea.find(delimitador)+1, linea.length());    
    }

    string conseguirNombre(){
        return nombre;
    }

    string conseguirNumDeCedula(){
        return cedula;
    }
    
};

class Registro
{
    public:

    Persona personas[950];

    void leerDatos()
    {

        ifstream archivo_entrada("datos.csv");;
        string linea;

        int index = 0;
        while(getline(archivo_entrada, linea)) {       
            Persona persona;
            persona.asignarDatos(linea);
            personas[index] = persona;
            index = index +1; 
        }     
    }

    void imprimirLista()
    {
        for(int i =0 ; i <= sizeof(personas); i++){
            cout << personas[i].conseguirNombre()<< endl;
            cout << personas[i].conseguirNumDeCedula()<< endl;
        }
    }
};


class BusquedaBinaria
{
    void busquedaBinaria(int )
    {
        ;
    }
};
  

int main()
{
    Registro regx;
    regx.leerDatos();
    regx.imprimirLista();
}
 
    