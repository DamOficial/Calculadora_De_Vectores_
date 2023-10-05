?#pragma once
#include "Commons.h"
#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"

class App
{
public:
	App();
	~App();

	void Menu()
	{
		int op;
		cout << "Calculadora de vectores" << endl;
		cout << "1. Vector 2" << endl;
		cout << "2. Vector 3" << endl;
		cout << "3. Vector 4" << endl;
		cout << "4- Salir" << endl;
		cout << "Selecciona una opción: " << endl;
		cin >> op;

		switch (op)
		{
		case 1:
			opVector2();
			break;
		case 2:
			opVector3();
			break;
		case 3:
			opVector4();
			break;
		case 4:
			cout << "????" << endl;
			break;
		default:
			cout << "Opción no valida " << endl;
			break;
		}

	}
	void opVector2()
	{
		int op;

		cout << "Vector 2" << endl;
		cout << "1. Suma" << endl;
		cout << "2. Resta" << endl;
		cout << "3. Multiplicación" << endl;
		cout << "4. División" << endl;
		cout << "5. Producto Punto" << endl;
		cout << "6. Producto Cruz" << endl;
		cout << "7. Magnitud" << endl;
		cout << "8. Normalizar" << endl;
		cout << "9. Salir" << endl;
		cout << "Selecciona una opción:" << endl;
		cin >> op;

		switch (op)
		{
		case 1:
		{
			cout << "Ingrese los primeros valores: ";
			cin >> x1 >> y1;
			cout << "Ingrese los segundos valores: ";
			cin >> x2 >> y2;
			Vector2 v1(x1, y1);
			Vector2 v2(x2, y2);
			Vector2 v3 = v1.suma(v2);
			cout << "El resultado es: ";
			v3.mostrar();
			break;
		}
		case 2:
		{
			cout << "Ingrese los primeros valores: ";
			cin >> x1 >> y1;
			cout << "Ingrese los segundos valores: ";
			cin >> x2 >> y2;
			Vector2 v1(x1, y1);
			Vector2 v2(x2, y2);
			Vector2 v3 = v1.resta(v2);
			cout << "El resultado es: ";
			v3.mostrar();
			break;
		}
		case 3:
		{
			cout << "Ingrese los primeros valores: ";
			cin >> x1 >> y1;
			cout << "Ingrese los segundos valores: ";
			cin >> x2 >> y2;
			Vector2 v1(x1, y1);
			Vector2 v2(x2, y2);
			Vector2 v3 = v1.multiplicacion(v2);
			cout << "El resultado es: ";
			v3.mostrar();
			break;
		}
		case 4:
		{
			cout << "Ingrese los primeros valores: ";
			cin >> x1 >> y1;
			cout << "Ingrese los segundos valores: ";
			cin >> x2 >> y2;
			Vector2 v1(x1, y1);
			Vector2 v2(x2, y2);
			Vector2 v3 = v1.division(v2);
			cout << "El resultado es: ";
			v3.mostrar();
			break;
		}
		case 5:
		{
			cout << "Ingrese los primeros valores: ";
			cin >> x1 >> y1;
			cout << "Ingrese los segundos valores: ";
			cin >> x2 >> y2;
			Vector2 v1(x1, y1);
			Vector2 v2(x2, y2);
			double v3 = v1.pPunto(v2);
			cout << "El resultado es: " << v3;
			break;
		}
		case 6:
		{
			cout << "Ingrese los primeros valores: ";
			cin >> x1 >> y1;
			cout << "Ingrese los segundos valores: ";
			cin >> x2 >> y2;
			Vector2 v1(x1, y1);
			Vector2 v2(x2, y2);
			Vector2 v3 = v1.pCruz(v2);
			cout << "El resultado es: ";
			v3.mostrar();
			break;
		}
		case 7:
		{
			cout << "Ingrese los valores: ";
			cin >> x1 >> y1;
			Vector2 v1(x1, y1);
			double mag = v1.magnitud();
			cout << "El resultado es: " << mag << endl;
			break;
		}
		case 8:
		{
			cout << "Ingrese los valores: ";
			cin >> x1 >> y1;
			Vector2 v1(x1, y1);
			Vector2 v2 = v1.normalizar();
			cout << "El resultado es ";
			v2.mostrar();
			break;
		}
		case 9:
		{
			Menu();
			break;
		}
		}
	}
	void opVector3()
	{
		int op;

		cout << "Vector 2" << endl;
		cout << "1. Suma" << endl;
		cout << "2. Resta" << endl;
		cout << "3. Multiplicación" << endl;
		cout << "4. División" << endl;
		cout << "5. Producto Punto" << endl;
		cout << "6. Producto Cruz" << endl;
		cout << "7. Magnitud" << endl;
		cout << "8. Normalizar" << endl;
		cout << "9. Salir" << endl;
		cout << "Selecciona una opción:" << endl;
		cin >> op;

		switch (op)
		{
		case 1:
		{
			cout << "Ingrese los primeros valores: ";
			cin >> x1 >> y1 >> z1;
			cout << "Ingrese los segundos valores: ";
			cin >> x2 >> y2 >> z2;
			Vector3 v1(x1, y1, z1);
			Vector3 v2(x2, y2, z2);
			Vector3 v3 = v1.suma(v2);
			cout << "El resultado es: ";
			v3.mostrar();
			break;
		}
		case 2:
		{
			cout << "Ingrese los primeros valores: ";
			cin >> x1 >> y1 >> z1;
			cout << "Ingrese los segundos valores: ";
			cin >> x2 >> y2 >> z2;
			Vector3 v1(x1, y1, z1);
			Vector3 v2(x2, y2, z2);
			Vector3 v3 = v1.resta(v2);
			cout << "El resultado es: ";
			v3.mostrar();
			break;
		}
		case 3:
		{
			cout << "Ingrese los primeros valores: ";
			cin >> x1 >> y1 >> z1;
			cout << "Ingrese los segundos valores: ";
			cin >> x2 >> y2 >> z2;
			Vector3 v1(x1, y1, z1);
			Vector3 v2(x2, y2, z2);
			Vector3 v3 = v1.multiplicacion(v2);
			cout << "El resultado es: ";
			v3.mostrar();
			break;
		}
		case 4:
		{
			cout << "Ingrese los primeros valores: ";
			cin >> x1 >> y1 >> z1;
			cout << "Ingrese los segundos valores: ";
			cin >> x2 >> y2 >> z2;
			Vector3 v1(x1, y1, z1);
			Vector3 v2(x2, y2, z2);
			Vector3 v3 = v1.division(v2);
			cout << "El resultado es: ";
			v3.mostrar();
			break;
		}
		case 5:
		{
			cout << "Ingrese los primeros valores: ";
			cin >> x1 >> y1 >> z1;
			cout << "Ingrese los segundos valores: ";
			cin >> x2 >> y2 >> z2;
			Vector3 v1(x1, y1, z1);
			Vector3 v2(x2, y2, z2);
			double v3 = v1.pPunto(v2);
			cout << "El resultado es: " << v3;
			break;
		}
		case 6:
		{
			cout << "Ingrese los primeros valores: ";
			cin >> x1 >> y1 >> z1;
			cout << "Ingrese los segundos valores: ";
			cin >> x2 >> y2 >> z2;
			Vector3 v1(x1, y1, z1);
			Vector3 v2(x2, y2, z2);
			Vector3 v3 = v1.pCruz(v2);
			cout << "El resultado es: ";
			v3.mostrar();
			break;
		}
		case 7:
		{
			cout << "Ingrese los valores: ";
			cin >> x1 >> y1 >> z1;
			Vector3 v1(x1, y1, z1);
			double mag = v1.magnitud();
			cout << "El resultado es: " << mag << endl;
			break;
		}
		case 8:
		{
			cout << "Ingrese los valores: ";
			cin >> x1 >> y1 >> z1;
			Vector3 v1(x1, y1, z1);
			Vector3 v2 = v1.normalizar();
			cout << "El resultado es:  ";
			v2.mostrar();
			break;
		}
		case 9:
		{
			Menu();
			break;
		}
		}
	}
	void opVector4()
	{
		int op;

		cout << "Vector 2" << endl;
		cout << "1. Suma" << endl;
		cout << "2. Resta" << endl;
		cout << "3. Multiplicación" << endl;
		cout << "4. División" << endl;
		cout << "5. Producto Punto" << endl;
		cout << "6. Magnitud" << endl;
		cout << "7. Normalizar" << endl;
		cout << "8. Salir" << endl;
		cout << "Selecciona una opción:" << endl;
		cin >> op;

		switch (op)
		{
		case 1:
		{
			cout << "Ingrese los primeros valores: ";
			cin >> x1 >> y1 >> z1 >> w1;
			cout << "Ingrese los segundos valores: ";
			cin >> x2 >> y2 >> z2 >> w2;
			Vector4 v1(x1, y1, z1, w1);
			Vector4 v2(x2, y2, z2, w2);
			Vector4 v3 = v1.suma(v2);
			cout << "El resultado es: ";
			v3.mostrar();
			break;
		}
		case 2:
		{
			cout << "Ingrese los primeros valores: ";
			cin >> x1 >> y1 >> z1 >> w1;
			cout << "Ingrese los segundos valores: ";
			cin >> x2 >> y2 >> z2 >> w2;
			Vector4 v1(x1, y1, z1, w1);
			Vector4 v2(x2, y2, z2, w2);
			Vector4 v3 = v1.resta(v2);
			cout << "El resultado es: ";
			v3.mostrar();
			break;
		}
		case 3:
		{
			cout << "Ingrese los primeros valores: ";
			cin >> x1 >> y1 >> z1 >> w1;
			cout << "Ingrese los segundos valores: ";
			cin >> x2 >> y2 >> z2 >> w2;
			Vector4 v1(x1, y1, z1, w1);
			Vector4 v2(x2, y2, z2, w2);
			Vector4 v3 = v1.multiplicacion(v2);
			cout << "El resultado es: ";
			v3.mostrar();
			break;
		}
		case 4:
		{
			cout << "Ingrese los primeros valores: ";
			cin >> x1 >> y1 >> z1 >> w1;
			cout << "Ingrese los segundos valores: ";
			cin >> x2 >> y2 >> z2 >> w2;
			Vector4 v1(x1, y1, z1, w1);
			Vector4 v2(x2, y2, z2, w2);
			Vector4 v3 = v1.division(v2);
			cout << "El resultado es: ";
			v3.mostrar();
			break;
		}
		case 5:
		{
			cout << "Ingrese los primeros valores: ";
			cin >> x1 >> y1 >> z1 >> w1;
			cout << "Ingrese los segundos valores: ";
			cin >> x2 >> y2 >> z2 >> w2;
			Vector4 v1(x1, y1, z1, w1);
			Vector4 v2(x2, y2, z2, w2);
			double v3 = v1.pPunto(v2);
			cout << "El resultado es: " << v3;
			break;
		}
		case 6:
		{
			cout << "Ingrese los valores: ";
			cin >> x1 >> y1 >> z1 >> w1;
			Vector4 v1(x1, y1, z1, w1);
			double mag = v1.magnitud();
			cout << "El resultado es: " << mag << endl;
			break;
		}
		case 7:
		{
			cout << "Ingrese los valores: ";
			cin >> x1 >> y1 >> z1 >> w1;
			Vector4 v1(x1, y1, z1, w1);
			Vector4 v2 = v1.normalizar();
			cout << "El resultado es: ";
			v2.mostrar();
			break;
		}
		case 8:
		{
			Menu();
			break;
		}
		}
	}
private:
	double w1, x1, y1, z1, w2, x2, y2, z2;

};
