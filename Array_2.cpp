#include <iostream>

using namespace std;

int main(){
    
    int fil;
    int col;
    cout<<"Ingrese el numero de filas:";
    cin>>fil;
    cout<<"Ingrese el numero de columnas:";
    cin>>col;
    int matriz[fil][col]={{10,20,30},{40,50,60}};
    cout<<"0,0:"<<matriz[0][0]<<endl;
    cout<<"0,1:"<<matriz[0][1]<<endl;
    cout<<"0,2:"<<matriz[0][2]<<endl;
    cout<<"1,0:"<<matriz[1][0]<<endl;
    cout<<"1,1:"<<matriz[1][1]<<endl;
    cout<<"1,2:"<<matriz[1][2]<<endl;
    

    cout<<"-----------------------Ingresar--------------"<<endl;
    for(int i=0; i<fil;i++){
        for(int ii=0; ii<col;ii++){
            cout<<"Ingrese numero"<<"["<<i<<"]"<<"["<<ii<<"]:"<<endl;
            cin>>matriz[i][ii];
        }
    }
    for(int i=0; i<fil;i++){
        for(int ii=0;ii<col;ii++){
            cout<<i<<","<<ii<<":"<<matriz[i][ii]<<endl;

        }
        cout<<"_______________"<<endl;
    }

}