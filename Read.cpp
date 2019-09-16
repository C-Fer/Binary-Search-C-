#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;

typedef struct{
    char nombre;
    int cedula;
}personas;

personas *per;

void vaciar(char temp[]);
void copiar(char temp[],int i);

int main(){
    char temp[950];
    int cont =0;

    FILE *f;
    f= fopen("datos.csv","r");
    if(f==NULL){
        cout<<"No se ha podido abrir el fichero."<<endl;
        exit(1);
    }

    while(!feof(f)){
        fgets(temp,950,f);
        cont++;
    }

    rewind(f);

    per =(personas*)malloc(cont*sizeof(personas));
    if(per==NULL){
        cout<<"No se ha podido reservar la memoria. "<<endl;
        exit(1);        
    }

    for(int i=0; !feof(f);i++){
        vaciar(temp);
        char aux = '0';
        for(int j=0; aux != ';';j++){
            aux= fgetc(f);
            if(aux !=';'){
                temp[j]=aux;
            }
        }
        copiar(temp,i);

        fgets(temp,950,f);
        per[i].cedula = atoi(temp);

        cout<<"Cedula: %i Nombre: %s."<<endl<<per[i].cedula<<per[i].nombre;
    }

    system("pause");
    return 0;
}

void vaciar(char temp[]){
    int i;

    for(i=0; i<950; i++){
        temp[i]='\0';
    }
}

void copiar(char temp[],int i){
    int N= strlen(temp)+1;
    per[i].nombre=(char*)malloc(N*sizeof(char));
    if(per[i].nombre==NULL){
        cout<<"No se ha podido reservar memoria. "<<endl;
        exit(1);
    }
    strcpy(per[i].nombre,temp);
}