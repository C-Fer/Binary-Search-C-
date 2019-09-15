#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>

using namespace std;

class Persona
{    
    public: 
  
    string nombre, cedula; 
    
    asignarNombre(string linea) 
    { 
        string delimitador = ";";
        cedula = linea.substr(0, linea.find(delimitador));
        nombre = linea.substr(linea.find(delimitador)+1, linea.length());    
    } 

    string nombreCedula(){
        return nombre + " " + cedula;
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
            persona.asignarNombre(linea);
            personas[index] = persona;
            index = index +1; 
        }     
    }

    void imprimirLista()
    {
        for(int i =0 ; i <= sizeof(personas); i++){
            cout << personas[i].nombreCedula()<< endl;
        }
    }
};


class BusquedaBinary
{

};
  

int main()
{
    Registro regx;
    regx.leerDatos();
    regx.imprimirLista();
}
 
    