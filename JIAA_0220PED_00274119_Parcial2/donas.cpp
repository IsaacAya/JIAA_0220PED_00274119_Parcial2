#include <stdio.h>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
struct producto {
string nombre ;
float preciounitario;
} ;
typedef struct producto Prod;

struct pedido {
string apellido ;
};
typedef struct pedido ped; 
vector <Prod> comida ;
queue <Prod> donas;
queue <Prod> platos;
float GananciasDo();
float GananciasPl();
void atender();
int main(){
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\n1) Atender pedidos. \n";
        cout << "2) Ganancias Platos Fuertes.\n";
        cout << "3) Ganancias Donas.\n";
        cout << "4) Salir.\n";
        cin >> opcion; cin.ignore();
        
        switch(opcion){
            case 1: atender(); break;
            case 2: GananciasDo();
            case 3: GananciasPl();
            case 4: continuar = false;
            default: cout << "Opcion no valida.\n"; break;
        }
    }while(continuar);
}




void atender(){ char opc;Prod unproducto;

    cout<<"Desea comprar Donas o Plato fuerte (D / P)"<<endl;
    cin>>opc; cin.ignore();
    if (opc=='D'){
    cout << "Tipo: "; getline(cin, unproducto.nombre);
    cout << "Precio: "; cin >> unproducto.preciounitario; cin.ignore();
    comida.insert(comida.end(), unproducto);
    donas.push(unproducto);
    
    }else if(opc=='P'){
    cout << "Tipo: "; getline(cin, unproducto.nombre);
    cout << "Precio: "; cin >> unproducto.preciounitario; cin.ignore();
    comida.insert(comida.end(), unproducto);
    platos.push(unproducto);
    }else {cout<<"Opcion invalida!"<<endl;
        return;
    }
}
float GananciasDo( ){}

float GananciasPl(){}