#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &, int &, int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

//Write definition of shuffle() here 
void shuffle(int &a,int &b, int &c, int &d)
{
	int arr1[4] = {a,b,c,d};
	for (int k = 0; k < 10; k++)
	{
		
	 	int	i = rand()%4;	
		int	j = rand()%4;

		int temp = arr1[i];

		arr1[i] = arr1[j];
		arr1[j] = temp;

	}

	a = arr1[0];
	b = arr1[1];
	c = arr1[2];
	d = arr1[3];
}