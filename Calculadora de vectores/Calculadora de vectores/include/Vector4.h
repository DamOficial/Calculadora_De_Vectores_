#pragma once
#include "Commons.h"

class Vector4
{
public:
	Vector4(double x, double y, double z, double w) : x_(x), y_(y), z_(z), w_(w) {}
	~Vector4() = default;

	//Suma de 4 vectores
	Vector4 suma(Vector4 v)
	{
		return Vector4(x_ + v.x_, y_ + v.y_, z_ + v.z_, w_ + v.w_);
	}
	//Resta de 4 vectores
	Vector4 resta(Vector4 v)
	{
		return Vector4(x_ - v.x_, y_ - v.y_, z_ - v.z_, w_ - v.w_);
	}

	//Multiplicacion de 4 vectores
	Vector4 multiplicacion(Vector4 v)
	{
		return Vector4(x_ * v.x_, y_ * v.y_, z_ * v.z_, w_ * v.w_);
	}

	//Division de 4 vectores
	Vector4 division(Vector4 v)
	{
		return Vector4(x_ / v.x_, y_ / v.y_, z_ / v.z_, w_ / v.w_);
	}

	//Producto punto de 4 vectores
	double pPunto(Vector4 v)
	{
		return (x_ * v.x_) + (y_ * v.y_) + (z_ * v.z_) + (w_ * v.w_);
	}

	//Magnitud de 4 vectores
	double magnitud()
	{
		return sqrt(pow(x_, 2) + pow(y_, 2) + pow(z_, 2) + pow(w_, 2));
	}

	//Normalizacion de 4 vectores
	Vector4 normalizar()
	{
		double mag = magnitud();
		return Vector4(x_ / mag, y_ / mag, z_ / mag, w_ / mag);
	}

	//Resultado de 4 vectores 
	void mostrar()
	{
		cout << "Vector: (" << x_ << ", " << y_ << ", " << z_ << ", " << w_ << ")" << endl;
	}

private:
	float w_;
	float x_;
	float y_;
	float z_;
};