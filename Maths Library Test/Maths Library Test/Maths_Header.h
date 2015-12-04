#ifndef CLASSES_H
#define CLASSES_H

#include <iostream>
using namespace std;

#pragma region Vector2D

// 2D vector support
template <typename T>
class Vector2D
{
public:
	T x;
	T y;

	Vector2D(T a, T b);
	Vector2D();
	Vector2D<T> operator +(Vector2D &other);
	Vector2D<T> add(Vector2D<T>);
	Vector2D<T> operator -(Vector2D &other);
	Vector2D<T> sub(Vector2D<T>);
	T mag();
	Vector2D<T> normalize();
	T dotProduct(Vector2D<T>);
	Vector2D<T> linrIntrpol(Vector2D<T>, Vector2D<T>);
	void print();
};

// 2D Vector constructor
template <typename T>
Vector2D<T>::Vector2D(T a, T b)
{
	x = a;
	y = b;
};

// 2D Vector constructor
template<typename T>
Vector2D<T>::Vector2D()
{
	x = 0;
	y = 0;
}

// 2D overloaded operator for addition of 2D vectors
template <typename T>
Vector2D<T> Vector2D<T>::operator +(Vector2D &other)
{
	Vector2D<float> temp;
	temp.x = x + other.x;
	temp.y = y + other.y;

	return temp;
}

// Addition of two 2D vectors.
template <typename T>
Vector2D<T> Vector2D<T>::add(Vector2D<T> b)
{
	Vector2D<T> temp({ (this->x + b.x), (this->y + b.y) });

	return temp;
}

// 2D overloaded operator for subtraction of 2D vectors
template <typename T>
Vector2D<T> Vector2D<T>::operator -(Vector2D &other)
{
	Vector2D<float> temp;
	temp.x = x - other.x;
	temp.y = y - other.y;

	return temp;
}

// Subtraction of two 2D vectors.
template <typename T>
Vector2D<T> Vector2D<T>::sub(Vector2D<T> b)
{
	Vector2D<T> temp({ (this->x - b.x), (this->y - b.y) });

	return temp;
}

// Magnitude of a 2D Vector
template <typename T>
T Vector2D<T>::mag()
{
	T mag = sqrt((this->x * this->x) + (this->y * this->y));

	return mag;
}

// Normalize a 2D Vector
template <typename T>
Vector2D<T> Vector2D<T>::normalize()
{
	T mag = sqrt((this->x * this->x) + (this->y * this->y));

	Vector2D<T> temp({ (this->x / mag), (this->y / mag) });

	return temp;
}

// Finding the Dot Product of 2D Vectors
template <typename T>
T Vector2D<T>::dotProduct(Vector2D<T> b)
{
	T dotP = (this->x * b.x) + (this->y * b.y);

	return dotP;
}

// Linear Interpolation of Two 2D Vectors
template<typename T>
Vector2D<T> Vector2D<T>::linrIntrpol(Vector2D<T> a, Vector2D<T> b)
{
	Vector2D<float> temp;

	temp.x = a.x + 0.5 * (b.x - a.x);
	temp.y = a.y + 0.5 * (b.y - a.y);

	return temp;
}

// Print the value of a 2D Vector
template <typename T>
void Vector2D<T>::print()
{
	cout << "2D vector actual result: " << "x = " << this->x << ", " << "y = " << this->y << endl;
	cout << "\n";
}

#pragma endregion

#pragma region Vector3D

// 3D vector support
template <typename T>
class Vector3D
{
public:
	T x;
	T y;
	T z;

	Vector3D(T a, T b, T c);
	Vector3D();
	Vector3D<T> operator +(Vector3D &other);
	Vector3D<T> add(Vector3D<T>);
	Vector3D<T> operator -(Vector3D &other);
	Vector3D<T> sub(Vector3D<T>);
	T mag();
	Vector3D<T> normalize();
	T dotProduct(Vector3D<T>);
	Vector3D<T> crossProduct(Vector3D, Vector3D);
	Vector3D<T> linrIntrpol(Vector3D<T>, Vector3D<T>);
	void print();
};

// 3D vector Constructor
template <typename T>
Vector3D<T>::Vector3D(T a, T b, T c)
{
	x = a;
	y = b;
	z = c;
}

template<typename T>
Vector3D<T>::Vector3D()
{
	x = 0;
	y = 0;
	z = 0;
}

// 3D overloaded operator for addition of 3D vectors
template <typename T>
Vector3D<T> Vector3D<T>::operator +(Vector3D &other)
{
	Vector3D<float> temp;
	temp.x = x + other.x;
	temp.y = y + other.y;
	temp.z = z + other.z;

	return temp;
}

// Addition of two 3D vectors.
template <typename T>
Vector3D<T> Vector3D<T>::add(Vector3D<T> b)
{
	Vector3D<T> temp({ (this->x + b.x), (this->y + b.y), (this->z + b.z) });

	return temp;
}

// 3D overloaded operator for subtraction of 3D vectors
template <typename T>
Vector3D<T> Vector3D<T>::operator -(Vector3D &other)
{
	Vector3D<float> temp;
	temp.x = x - other.x;
	temp.y = y - other.y;
	temp.z = z - other.z;

	return temp;
}

// Subtraction of two 3D vectors.
template <typename T>
Vector3D<T> Vector3D<T>::sub(Vector3D<T> b)
{
	Vector3D<T> temp({ (this->x - b.x), (this->y - b.y), (this->z - b.z) });

	return temp;
}

// Magnitude of a 3D Vector
template <typename T>
T Vector3D<T>::mag()
{
	T mag = sqrt((this->x * this->x) + (this->y * this->y) + (this->z * this->z));

	return mag;
}

// Normalize a 3D Vector
template <typename T>
Vector3D<T> Vector3D<T>::normalize()
{
	T mag = sqrt((this->x * this->x) + (this->y * this->y) + (this->z * this->z));

	Vector3D<T> temp({ (this->x / mag), (this->y / mag), (this->z / mag) });

	return temp;
}

// Finding the Dot Product of 3D Vectors
template <typename T>
T Vector3D<T>::dotProduct(Vector3D<T> b)
{
	T dotP = (this->x * b.x) + (this->y * b.y) + (this->z * b.z);

	return dotP;
}

// Cross Product of two 3D Vectors
template<typename T>
Vector3D<T> Vector3D<T>::crossProduct(Vector3D a, Vector3D b)
{
	Vector3D<float> temp = { (a.y * b.z - a.z * b.y), (a.z * b.x - a.x* b.z), (a.x * b.y - a.y * b.x) };

	return temp;
}

// Linear Interpolation of Two 3D Vectors
template<typename T>
Vector3D<T> Vector3D<T>::linrIntrpol(Vector3D<T> a, Vector3D<T> b)
{
	Vector3D<float> temp;

	temp.x = a.x + 0.5 * (b.x - a.x);
	temp.y = a.y + 0.5 * (b.y - a.y);
	temp.z = a.z + 0.5 * (b.z - a.z);

	return temp;
}


// Print the value of a 3D Vector
template <typename T>
void Vector3D<T>::print()
{
	cout << "3D vector actual result: " << "x = " << this->x << ", " << "y = " << this->y << ", " << "z = " << this->z << endl;
	cout << "\n";
}

#pragma endregion

#pragma region Vector4D

// 4D vector support
template <typename T>
class Vector4D
{
public:
	T red;
	T green;
	T blue;
	T alpha;

	Vector4D(T a, T b, T c, T d);
	Vector4D<T> normalize();
	void print();
};

// 4D vector Constructor
template <typename T>
Vector4D<T>::Vector4D(T a, T b, T c, T d)
{
	red = a;
	green = b;
	blue = c;
	alpha = d;
}

// Normalize a 4D Vector
template <typename T>
Vector4D<T> Vector4D<T>::normalize()
{
	T mag = sqrt((this->red * this->red) + (this->green * this->green) + (this->blue * this->blue) + (this->alpha * this->alpha));

	Vector4D<T> temp({ (this->red / mag), (this->green / mag), (this->blue / mag), (this->alpha / mag) });

	return temp;
}

// Print the value of a 4D Vector
template <typename T>
void Vector4D<T>::print()
{
	cout << "4D vector actual result: " << "red = " << this->red << ", " << "green = " << this->green << ", " << "blue = " << this->blue << ", " << "alpha = " << this->alpha << endl;
	cout << "\n";
}
#pragma endregion

#pragma region Degree/Radian

// Degree to Radian Converstion
template <typename T>
T deg2rad(T deg)
{
	const double Pi = 3.141592;

	T rad = (Pi / 180) * deg;

	return rad;
}

// Radian to Degree Conversion
template <typename T>
T rad2deg(T rad)
{
	const double Pi = 3.141592;

	T deg = (180 / Pi) * rad;

	return deg;
}

#pragma endregion

#endif