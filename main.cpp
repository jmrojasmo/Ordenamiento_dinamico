#include <iostream>
using namespace std;

void mayor(int valores[], int cant){
    int aux;
    for(int i = 0; i < cant; i++){
        for(int x = 0; x < cant; x++){
            if(valores[i] > valores[x]){
                aux = valores[i];
                valores[i] = valores[x];
                valores[x] = aux;
            }
        }
    }
    cout << "\n Ordenamiento de mayor a menor : ";
    for(int i = 0; i < cant; i++){
        cout << "" << valores[i] << " - ";
    }
    cout << "Fin!" << endl;
}

void menor(int valores[], int cant){
    int aux;
    for(int i = 0; i < cant; i++){
        for(int x = 0; x < cant; x++){
            if(valores[i] < valores[x]){
                aux = valores[x];
                valores[x] = valores[i];
                valores[i] = aux;
            }
        }
    }
    cout << "\n Ordenamiento de menor a mayor: ";
    for(int i = 0; i < cant; i++){
        cout << "" << valores[i] << " - ";
    }
    cout << "Fin!" << endl;
}




int main() {
    int *valores, cant, num, op;



    cout << "Cuantos valores desea ingresar?: ";
    cin >> cant;

    valores = new int[cant];


    for(int i = 0; i < cant; i++){
        cout << "Ingrese el valor No. " << i << ": ";
        cin >> num;
        valores[i] = num;
    }
    
	
	do{	
    cout << "\nSelecciones una de las siguientes opciones" << endl;
    cout << "------------------------------------------" << endl;
    cout << "1) Ordenar de mayor a menor" << endl;
    cout << "2) Ordenar de menor a mayor" << endl;
    cout << "3) Salir" << endl;
    cout << "------------------------------------------" << endl;
    cout << "Opcion: ";
    cin >> op;

    switch(op) {
    case 1:
    	system("color 4f");
        mayor(valores, cant);
        break;
    case 2:
    	system("color 1f");
        menor(valores, cant);
        break;
    }
	system("pause");

   
	}while(op !=3);
}