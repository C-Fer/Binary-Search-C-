#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>

using namespace std;

int main()
{

        ifstream archivo_entrada("datos.csv");;
        string linea;


        while(getline(archivo_entrada, linea)) {

            cout << linea[0] << endl;
                
        }

        return EXIT_SUCCESS;
}