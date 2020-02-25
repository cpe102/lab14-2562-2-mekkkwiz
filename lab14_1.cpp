#include <iostream>
using namespace std;


int main(){
	int a = 5;
	char b = 'A';
	char &c = b;
	int *x = &a;
	char *y = &b;
	int **z = &x;

	cout << endl;
	cout << "-------------------------------" << endl << endl ;

	cout << "value a = " << a << endl ;
	cout << "value b = " << b << endl ;
	cout << "value c = " << c << endl ;
	cout << "value x = " << x << endl ;
	cout << "value y = " << (void*)y << endl ;
	cout << "value z = " << z << endl << endl ;

	cout << "-------------------------------" << endl << endl ;

	cout << "address a = " << &a << endl ;
	cout << "address b = " << (void*)&b << endl ;
	cout << "address c = " << (void*)&c << endl ;
	cout << "address x = " << &x << endl ;
	cout << "address y = " << &y << endl ;
	cout << "address z = " << &z << endl ;

	c = 'F';

	cout << "-------------------------------" << endl << endl ;

	cout << "value a = " << a << endl ;
	cout << "value b = " << b << endl ;
	cout << "value c = " << c << endl ;
	cout << "value x = " << x << endl ;
	cout << "value y = " << (void*)y << endl ;
	cout << "value z = " << z << endl << endl ;

	*y = 'W';

	cout << "-------------------------------" << endl << endl ;

	cout << "value a = " << a << endl ;
	cout << "value b = " << b << endl ;
	cout << "value c = " << c << endl ;
	cout << "value x = " << x << endl ;
	cout << "value y = " << (void*)y << endl ;
	cout << "value z = " << z << endl << endl ;

	*x = 6;

	cout << "-------------------------------" << endl << endl ;

	cout << "value a = " << a << endl ;
	cout << "value b = " << b << endl ;
	cout << "value c = " << c << endl ;
	cout << "value x = " << x << endl ;
	cout << "value y = " << (void*)y << endl ;
	cout << "value z = " << z << endl << endl ;

	**z = 7;

	cout << "-------------------------------" << endl << endl ;

	cout << "value a = " << a << endl ;
	cout << "value b = " << b << endl ;
	cout << "value c = " << c << endl ;
	cout << "value x = " << x << endl ;
	cout << "value y = " << (void*)y << endl ;
	cout << "value z = " << z << endl << endl ;



	
	
	
	return 0;
}
