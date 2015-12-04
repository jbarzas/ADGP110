#include "Maths_Header.h"

void main()
{
#pragma region Degree/Radian

	// Degree to Radian Conversion
	cout << "====== Degrees and Radians Conversion ======" << endl;
	cout << "\n";

	double input1;

	cout << "Degree to be converted to Radians?  ";

	cin >> input1;

	cout << endl;

	double rad = deg2rad(input1);

	cout << input1 << " Degrees = " << rad << " Radians." << endl;

	cout << endl;
	system("pause");
	cout << endl;

	// Radian to Degree Conversion
	double input2;

	cout << "Radians to be converted to Degrees?  ";

	cin >> input2;

	cout << endl;

	double deg = rad2deg(input2);

	cout << input2 << " Radians = " << deg << " Degrees." << endl;

	cout << endl;
	system("pause");
	cout << endl;

#pragma endregion

#pragma region Vector2D

	// Math for 2D Vectors.
	cout << "====== Math for 2D Vectors ======" << endl;
	cout << "\n";

	// 2D Vectors to be used.
	Vector2D<float> vector2Da(6, 12);
	Vector2D<float> vector2Db(3, 1);

	// 2D vector addition using overloading operator
	Vector2D<float> vector2Dc = vector2Da + vector2Db;
	cout << "Addition of two 2D Vectors using overloaded operator. (6, 12) + (3, 1)" << endl;
	cout << "Expected result: (9, 13)" << endl;
	vector2Dc.print();

	// 2D vector addition.
	Vector2D<float> sum2D = vector2Da.add(vector2Db);

	cout << "Addition of two 2D Vectors. (6, 12) + (3, 1)" << endl;
	cout << "Expected result: (9, 13)" << endl;
	sum2D.print();

	// 2D vector subtraction using overloading operator
	Vector2D<float> vector2Dd = vector2Da - vector2Db;
	cout << "Subtraction of two 2D Vectors using overloaded operator. (6, 12) - (3, 1)" << endl;
	cout << "Expected result: (3, 11)" << endl;
	vector2Dd.print();

	// 2D vector subtraction.
	Vector2D<float> dif2D = vector2Da.sub(vector2Db);

	cout << "Subtraction of two 2D Vectors. (6, 12) - (3, 1)" << endl;
	cout << "Expected result: (3, 11)" << endl;
	dif2D.print();

	// 2D vector magnitude.
	float mag1 = vector2Da.mag();

	cout << "Magnitude of the 2D Vector. (6, 12)" << endl;
	cout << "Expected result: 13.41" << endl;
	cout << "Magnitude: " << mag1 << endl;
	cout << "\n";

	// 2D vector normalize.
	Vector2D<float> normalized2D = vector2Da.normalize();

	cout << "Normalizing a 2D Vector. (6, 12)" << endl;
	cout << "Expected result: (0.44, 0.89)" << endl;
	normalized2D.print();

	// 2D Dot Product
	float dotP2D = vector2Da.dotProduct(vector2Db);

	cout << "Dot Product of two 2D Vectors. (6, 12) , (3, 1)" << endl;
	cout << "Expected result: 30" << endl;
	cout << "Dot Product: " << dotP2D << endl;
	cout << "\n";

	// 2D Linear Interpolation
	Vector2D<float> linInt2D = linInt2D.linrIntrpol(vector2Da, vector2Db);
	cout << "Linear Interpolation of two 2D Vectors. (6, 12) , (3, 1)" << endl;
	cout << "Expected result: (4.5, 6.5)" << endl;
	linInt2D.print();

#pragma endregion

#pragma region Vector3D

	// Math for 3D Vectors.
	cout << "====== Math for 3D Vectors ======" << endl;
	cout << "\n";

	// 3D Vectors to be used.
	Vector3D<float> vector3Da(6, 12, 4);
	Vector3D<float> vector3Db(3, 1, 20);

	// 3D vector addition using overloading operator
	Vector3D<float> vector3Dc = vector3Da + vector3Db;
	cout << "Addition of two 3D Vectors using overloaded operator. (6, 12) + (3, 1)" << endl;
	cout << "Expected result: (9, 13, 24)" << endl;
	vector3Dc.print();

	// 3D vector addition.
	Vector3D<float> sum3D = vector3Da.add(vector3Db);

	cout << "Addition of two 3D Vectors. (6, 12, 4) + (3, 1, 20)" << endl;
	cout << "Expected result: (9, 13, 24)" << endl;
	sum3D.print();

	// 3D vector subtraction using overloading operator
	Vector3D<float> vector3Dd = vector3Da - vector3Db;
	cout << "Subtraction of two 3D Vectors using overloaded operator. (6, 12) - (3, 1)" << endl;
	cout << "Expected result: (3, 11, -16)" << endl;
	vector3Dd.print();

	// 3D vector subtraction.
	Vector3D<float> dif3D = vector3Da.sub(vector3Db);

	cout << "Subtraction of two 3D Vectors. (6, 12, 4) - (3, 1, 20)" << endl;
	cout << "Expected result: (3, 11, -16)" << endl;
	dif3D.print();

	// 3D vector magnitude.
	float mag3 = vector3Da.mag();

	cout << "Magnitude of the 3D Vector. (6, 12, 4)" << endl;
	cout << "Expected result: 14" << endl;
	cout << "Magnitude: " << mag3 << endl;
	cout << "\n";

	// 3D vector normalize.
	Vector3D<float> normalized3D = vector3Da.normalize();

	cout << "Normalize a 3D Vector. (6, 12, 4)" << endl;
	cout << "Expected result: (0.42, 0.85, 0.28)" << endl;
	normalized3D.print();

	// 3D Dot Product
	float dotP3D = vector3Da.dotProduct(vector3Db);

	cout << "Dot Product of two 3D Vectors. (6, 12, 4) , (3, 1, 20)" << endl;
	cout << "Expected result: 110" << endl;
	cout << "Dot Product: " << dotP3D << endl;
	cout << "\n";

	// 3D Cross Product
	Vector3D<float> crossP3D = crossP3D.crossProduct(vector3Da, vector3Db);
	cout << "Cross Product of two 3D Vectors. (6, 12, 4) , (3, 1, 20)" << endl;
	cout << "Expected result: (236, -108, -30)" << endl;
	crossP3D.print();

	// 3D Linear Interpolation
	Vector3D<float> linInt3D = linInt3D.linrIntrpol(vector3Da, vector3Db);
	cout << "Linear Interpolation of two 3D Vectors. (6, 12, 4) , (3, 1, 20)" << endl;
	cout << "Expected result: (4.5, 6.5, 12)" << endl;
	linInt3D.print();

#pragma endregion

#pragma region Vector4D

	// Math for 4D Vectors.
	cout << "====== Math for 4D Vectors ======" << endl;
	cout << "\n";

	// 4D Vector to be used.
	Vector4D<float> vector4Da(125, 160, 230, 255);

	// 4D vector normalize.
	Vector4D<float> normalized4D = vector4Da.normalize();

	cout << "Normalize a 4D Vector. (125, 160, 230, 255)" << endl;
	cout << "Expected result: (0.31, 0.40, 0.57, 0.63)" << endl;
	normalized4D.print();

#pragma endregion

	system("pause");
}