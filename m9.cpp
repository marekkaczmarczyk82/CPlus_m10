#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <math.h>

using namespace std;

	int main()
	{
		int *a;
		int num = 0x0f6a2f1;
		
		float i;

		for( i = 0; i < 1000000; i++ )
		{
			a = reinterpret_cast<int*>( num );

			a = a + 1;
			num = num + 1;

				cout << "i:=...\t" << i  << "\tAdres of memory >>>***<<<" << reinterpret_cast<int*>(a) << endl;
		}



	}
