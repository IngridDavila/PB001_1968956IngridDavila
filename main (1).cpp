#include <iostream>
#include <random>
using namespace std; //simulador de citas dentales
struct cita
{
char nom [100];
char med[100];
};
int main()
{
int op;
cita cita [5];
int confirmar;
int desicion=1;
int j;
int i;
	cout << "Bienvenido a la Clinica 1300Smiles" << endl;
	cout << "Selecione la opcion deseada:" << endl;
	
	   while(desicion==1)
    {	cout << "[1]Dar de Alta una cita" << endl;
		cout << "[2]Modificar cita" << endl;
		cout << "[3]Eliminar cita" << endl;
		cout << "[4]Lista de citas vigentes" << endl;
		cout << "[5]Limpiar pantalla" << endl;
		cout << "[6]Salir" << endl;
		cin >> op;
		
		switch (op) {
		case 1:
		cout<<"Introduce el numero de citas que deseas dar de alta"<<endl;
		cin>>j;
			for(i=0;i<j;i++)
        {
            cout<<"Numero de registro"<<i+1<<endl;
            cout<<"Ingrese el nombre del paciente"<<endl;
            cin>>cita[i].nom;
            cout<<"Ingrese el medicamento"<<endl;
            cin>>cita[i].med;
        }
        
        break;


		case 2: "Modificar cita";
			for(i=j;i<=j;i++)
        {
            cout<<"Numero de registro"<<i+1<<endl;
            cout<<"Ingrese el nombre del paciente"<<endl;
            cin>>cita[i].nom;
            cout<<"Ingrese el medicamento"<<endl;
            cin>>cita[i].med;
        }
        	
        break;
			
			
		case 3: "Eliminar cita";
			cout << "espere a nuevas actualizaciones" << endl;
		
			break;
			
			
		case 4: "Lista de citas vigentes";
		for(i=0;i<j;i++)
        { 
            cout<<"Numero de registro"<<i+1<<endl;
            cout<<cita[i].nom<<endl;
            cout<<cita[i].med<<endl;

        }
		break;	
			
		case 5: "Limpiar pantalla";
			cout << "espere a nuevas actualizaciones" << endl;

			break;
			
		case 6: "Salir";
		exit(0);
			break;
			
	default:
        cout<<"opcion invalida";
		}
    
}
    return 0;
}