#include<iostream>

using namespace std;

main(){
    
    int notas[4];
    notas[0] = 80;
    notas[1] = 65;
    notas[2] = 60;
    notas[3] = 75;
    cout<<notas[0]<<endl;
    cout<<notas[1]<<endl;
    cout<<notas[2]<<endl;
    cout<<notas[3]<<endl;
    notas[2] = 70;
    cout<<"Valor Modificado (2)"<<endl;
    int tam=0,suma=0,promedio=0;
    cout<<"Cuantos notas desea ingresar:";
    cin>>tam; //5
    int notas[tam];
    for(int i=0;i<tam;i++){
        cout<<"Ingrese Nota"<<i+1<<":";
        cin>>notas[i];
    }
    for(int i=0;i<tam;i++){
        suma += notas[i];
    }
    promedio = suma / tam;
    cout<<"El promedio es: "<<promedio<,endl;
    string nombre; //
    int dato;
    cout<<"Ingrese dato:";
    cin>>dato;
    cin.ignore();
    cout<<"Ingrese Nombre Completo: ";
    getline(cin,nombre);
    cout<<nombre<<endl;

    string semana[7]={"Lunes","Martes","Miercoles","Jueves","Viernes","Sabado","Domingo"}

        semana[3]= "Jueves";
        for (int i=0;i<7;i++){
            cout<<semana[i]<<endl;
        }
        
     system("pause");
}