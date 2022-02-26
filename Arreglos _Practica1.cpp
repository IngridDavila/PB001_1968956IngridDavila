#include <iostream>
using namespace std;

int main()
{
	int j;
	int i;
	string art[10];
	int op;
	int confirmar;
	int menu;

	cout << "Selecione la opcion deseada:" << endl;
	do {
		cout << "[1]Dar alta de articulos y su precio" << endl;
		cout << "[2]Lista de articulos vigentes y su precio" << endl;
		cout << "[3]Salir" << endl;
		cin >> op;
		switch (op)
		{
		case 1:
			cout << "Ingrese la cantidad de alta de articulos a agregar" << endl;
			cin >> j;
			for (i = 0; i < j; i++)
			{
				cout << "Ingrese articulos y su respectivo precio" << endl;
				cin >> art[j];
			}
			cout << "Desea regresar al menu?" << endl << "1_si" << endl << "2_no" << endl;
			cin >> confirmar;
			if (confirmar == 1)
			{
				cin >> menu;//Por alguna razon no se ejecuta de imediato, se tiene que agregar dos veces el numero investigar porque 
			}
			else {
				exit(0);
			}
			break;

		case 2:
			cout << "A continuacion se muestra la lista de articulos vigentes y respectivo precio" << endl;
			if (i == 0)
			{
				cout << "Por ahora no hay ningun articulo dado de alta" << endl;
			}
			else
			{
				for (int i = 0; i < j; i++)
				{
					cout << "Los articulos dados de alta fueron:" << endl;
					cout << art[j] << endl;
				}
			}
			cout << "Desea regresar al menu?" << endl << "1_si" << endl << "2_no" << endl;
			cin >> confirmar;
			if (confirmar == 1)
			{
				cin >> menu;
			}
			else {
				exit(0);
			}
			break;

		case 3: "Salir";
			exit(0);
			break;
		}
	} while (op != '4');
	return 0;
}
