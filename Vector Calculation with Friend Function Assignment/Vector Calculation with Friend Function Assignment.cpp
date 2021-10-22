#include<iostream>
using namespace std;
class vector
{
	float x;
	float y;
	float z;
public:
	vector()// distructor
	{
		x = 0.00;
		y = 0.00;
		z = 0.00;
	}
	vector(float a, float b, float c)//paramitarised 
	{
		x = a;
		y = b;
		z = c;
	}
	~vector()
	{

	}
	vector operator + (vector);							// Addition
	vector operator - (vector);							// Subtraction
	friend vector operator * (float a, vector v);		// Scalar product
	friend vector operator * (vector a, vector b);		// Dot product
	friend vector operator / (float a, vector v);		// Division
	void dot_product();									// Dot product
	vector operator*(vector v);
	void print();
};

vector vector :: operator + (vector v)		// Vector Addition
{
	vector temp;
	temp.x = x + v.x;
	temp.y = y + v.y;
	temp.z = z + v.z;
	return(temp);
}
vector vector :: operator - (vector v)		// Vector Subtraction
{
	vector temp;
	temp.x = x - v.x;
	temp.y = y - v.y;
	temp.z = z - v.z;
	return(temp);
}
vector operator * (float a, vector v)		// Scalar product
{
	vector temp;
	temp.x = a * v.x;
	temp.y = a * v.y;
	temp.z = a * v.z;
	return(temp);
}
vector operator * (vector a, vector b)		// Dot product
{
	vector temp;
	temp.x = a.x * b.x;
	temp.y = a.y * b.y;
	temp.z = a.z * b.z;
	return(temp);
}
void vector::dot_product()		// Dot product result
{
	cout << x + y + z << endl;
}
vector vector::operator*(vector v)		// Cross product
{
	vector temp;
	temp.x = (y * v.z) - (z * v.y);
	temp.y = (z * v.x) - (x * v.z);
	temp.z = (x * v.y) - (y * v.x);
	return(temp);
}
vector operator / (float a, vector v)		// Division
{
	vector temp;
	temp.x = v.x / a;
	temp.y = v.y / a;
	temp.z = v.z / a;
	return(temp);
}
void vector::print()	  // Printing function
{
	cout << x << "i" << "+" << y << "j" << "+" << z << "k" << endl << endl;
}
int main()		// Main function
{
	float i;
	float j;
	float k;
	float l;
	float m;
	float n;
	float o;
	cout << "Enter value of 'x' from 1st vector : ";
	cin >> i;
	cout << "Enter value of 'y' from 1st vector : ";
	cin >> j;
	cout << "Enter value of 'z' from 1st vector : ";
	cin >> k;
	cout << "Enter value of 'x' from 2nd vector : ";
	cin >> l;
	cout << "Enter value of 'y' from 2nd vector : ";
	cin >> m;
	cout << "Enter value of 'z' from 2nd vector : ";
	cin >> n;
	cout << "Enter a scalar value : ";
	cin >> o;
	vector vector_1(i, j, k);
	vector vector_2(l, m, n);
	vector vector_3;
	vector vector_4;
	vector vector_5;
	vector vector_6;
	vector vector_7;
	vector vector_8;
	vector_3 = vector_1 + vector_2;		// Vector addition result
	vector_4 = vector_1 - vector_2;		// Vector subtraction result
	vector_5 = operator * (o, vector_2);		// Vector Scalar product
	vector_6 = operator * (vector_1, vector_2);		// Vector dot product
	vector_7 = operator / (o, vector_1);		// Vector division
	vector_8 = operator * (vector_1, vector_2);
	vector_3.print();
	vector_4.print();
	vector_5.print();
	vector_6.dot_product();
	vector_7.print();
	vector_8.print();
	return 0;
}