#include <iostream>
#include <random>
using namespace std; //simulador de citas dentales
int op;
char nombre[100];
int confirmar;
int menu;
int main()
{
	cout << "Bienvenido a la Clinica 1300Smiles" << endl;
	cout << "Selecione la opcion deseada:" << endl;
	do {
		cout << "[1]Agendar cita" << endl;
		cout << "[2]Modificar cita" << endl;
		cout << "[3]Eliminar cita" << endl;
		cout << "[4]Lista de citas vigentes" << endl;
		cout << "[5]Limpiar pantalla" << endl;
		cout << "[6]Salir" << endl;
		cin >> op;
		switch (op) {
		case 1:
			cout << "Ingrese el nombre en el cual se agendera la cita" << endl;
			cin >> nombre;
			cout << "Lo estaremos esperando su numero de cita es" << endl;
			cout << rand() << endl;
			cout << "Desea ingresar otra cita?Pesione 1 para confirmar, sino cualquier otro numero" << endl;
			cin >> confirmar;
			if (confirmar == 1)
			{
				do
				{
					cout << "Ingrese el nombre en el cual se agendera la cita" << endl;
					cin >> nombre;
					cout << "Lo estaremos esperando su numero de cita es" << endl;
					cout << rand() << endl;
					cout << "Desea ingresar otra cita?Pesione 1 para confirmar, sino cualquier otro numero" << endl;
					cin >> confirmar;
				} while (confirmar <= 1);
				cout << "Desea regresar al menu?" << endl << "1_si" << endl << "2_no" << endl;
				cin >> menu;
				break;
			}
			else
			{
				cout << "Desea regresar al menu?" << endl << "1_si" << endl << "2_no" << endl;
				cin >> menu;
			}
			break;

		case 2: "Modificar cita";
			cout << "espere a nuevas actualizaciones" << endl;
			cout << "Desea regresar al menu?" << endl << "1_si" << endl << "2_no" << endl;
			cin >> menu;
			break;
		case 3: "Eliminar cita";
			cout << "espere a nuevas actualizaciones" << endl;
			cout << "Desea regresar al menu?" << endl << "1_si" << endl << "2_no" << endl;
			cin >> menu;
			break;
		case 4: "Lista de citas vigentes";
			cout << "espere a nuevas actualizaciones" << endl;
			cout << "Desea regresar al menu?" << endl << "1_si" << endl << "2_no" << endl;
			cin >> menu;
			break;
		case 5: "Limpiar pantalla";
			cout << "espere a nuevas actualizaciones" << endl;
			cout << "Desea regresar al menu?" << endl << "1_si" << endl << "2_no" << endl;
			cin >> menu;
			break;
		case 6: "Salir";
		exit(0);
			break;
		}
	} while (menu == 1);
	return 0;
}