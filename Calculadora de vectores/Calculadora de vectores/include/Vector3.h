#pragma once
#include "Commons.h"

class Vector3
{
public:
	Vector3(double x, double y, double z) : x_(x), y_(y), z_(z) {}
	~Vector3() = default;

	//Suma de 3 vectores
	Vector3 suma(Vector3 v)
	{
		return Vector3(x_ + v.x_, y_ + v.y_, z_ + v.z_);
	}

	//Resta de 3 vectores
	Vector3 resta(Vector3 v)
	{
		return Vector3(x_ - v.x_, y_ - v.y_, z_ - v.z_);
	}

	//Multiplicacion de 3 vectores
	Vector3 multiplicacion(Vector3 v)
	{
		return Vector3(x_ * v.x_, y_ * v.y_, z_ * v.z_);
	}

	//Division de 3 vectores
	Vector3 division(Vector3 v)
	{
		return Vector3(x_ / v.x_, y_ / v.y_, z_ / v.z_);
	}

	//Producto punto de 3 vectores
	double pPunto(Vector3 v)
	{
		return (x_ * v.x_) + (y_ * v.y_) + (z_ * v.z_);
	}

	//Producto cruz de 3 vectores
	Vector3 pCruz(Vector3 v)
	{
		return Vector3((y_ * v.z_) - (z_ * v.y_), (z_ * v.x_) - (x_ * v.z_), (x_ * v.y_) - (y_ * v.x_));
	}

	//Magnitud de 3 vectores
	double magnitud()
	{
		return sqrt((x_ * x_) + (y_ * y_) + (z_ * z_));
	}

	//Normalizacion de 3 vectores
	Vector3 normalizar()
	{
		double mag = magnitud();
		return Vector3(x_ / mag, y_ / mag, z_ / mag);
	}

	//Resultado de 3 vectores
	void mostrar()
	{
		cout << "Vector: (" << x_ << ", " << y_ << ", " << z_ << ")" << endl;
	}

private:
	double x_;
	double y_;
	double z_;
};
