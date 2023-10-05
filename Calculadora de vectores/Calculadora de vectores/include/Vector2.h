#pragma once
#include "Commons.h"

class Vector2 {
public:
	Vector2(double x, double y) : x_(x), y_(y) {}
	~Vector2() = default;

	//Suma de 2 vectores
	Vector2 suma(Vector2 v)
	{
		return Vector2(x_ + v.x_, y_ + v.y_);
	}

	//Resta de 2 vectores
	Vector2 resta(Vector2 v)
	{
		return Vector2(x_ - v.x_, y_ - v.y_);
	}

	//Multiplicacion de 2 vectores
	Vector2 multiplicacion(Vector2 v)
	{
		return Vector2(x_ * v.x_, y_ * v.y_);
	}

	//Realiza la division entre 2 vectores
	Vector2 division(Vector2 v)
	{
		return Vector2(x_ / v.x_, y_ / v.y_);
	}

	//Producto punto de 2 vectores
	double pPunto(Vector2 v)
	{
		return (x_ * v.x_) + (y_ * v.y_);
	}

	//Producto cruz de 2 vectores
	Vector2 pCruz(Vector2 v)
	{
		return Vector2((x_ * v.y_) - (y_ * v.x_), (x_ * v.y_) - (y_ * v.x_));
	}

	//Magnitud de 2 vectores
	double magnitud()
	{
		return sqrt(x_ * x_ + y_ * y_);
	}

	//Normalizacion de 2 vectores
	Vector2 normalizar()
	{
		double mag = magnitud();
		return Vector2(x_ / mag, y_ / mag);
	}

	//Resultado de 2 vectores
	void mostrar()
	{
		cout << "(" << x_ << ", " << y_ << ")" << endl;
	}
private:
	double x_;
	double y_;
};
