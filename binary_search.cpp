#include <fstream>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <locale.h>
#include <stdio.h>

using namespace std;

typedef struct{
    string cedula;
    string nombre;

}personas;

personas *per;



int main(){
    
    int cont=0;
    char temp[950];
    string ced=" ";
    cout<<"Ingrese # de cedula: "<<endl;
    cin>>ced;
    
    int tam=950;
    int sup= tam -1;
    int centro= 0;
    int inf=0;
    
    FILE *f;
    f=fopen("datos.csv","r");
    if(f==NULL){
        cout<<"No se ha podido abrir el archivo."<<endl;
        exit(1);
    }

   
    rewind(f);
    

    per=(personas*)malloc(cont*sizeof(personas));
    if(per==NULL){
        cout<<"No se ha podido reservar la memoria."<<endl;
        exit(1);
    }

    while(inf<=sup){
        centro =((sup-inf)/2)+inf;
        int contador =0; 
        for(int i =0; !feof(f);i++){
            string aux=" ";
            fgets(temp,950,f);
            cont++;
            if(contador==centro){
                for(int j=0;aux!=";";j++){
                    aux = fgetc(f);
                }
                if(aux == ced){
                    cout<<temp[i];
                }
                else if(ced < aux){
                    sup=centro-1;
                }
                else{
                    inf=centro+1;
                }

            }
           
        }

        
        
    }




 
    
    system("pause");
    return 0;
}
