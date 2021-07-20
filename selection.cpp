#include <iostream>
#include <locale.h>
using namespace std;

void selection_sort(int a[], int b)
{
	int salva;
	for(int i = 0; i < b - 1; i++)
	{
		for(int j = i + 1; j < b; j++)
		{
			cout << "[" << j << "]-> " << a[j - 1] << " [" << j + 1 << "] -> " << a[j] << endl;

			if(a[i] > a[j] )
			{
				salva = a[i];
				a[i] = a[j];
				a[j] = salva;
			}
		}
		cout << "----------------" << endl;
	}
}

void print (int c , int *n)
{
	for(int i = 0; i < c; i++)
	{
		cout << i + 1 << "° número: " << n[i] << endl;
	}
	cout << "------------------" << endl;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	
	int v[10] = {4, 7, 2, 5, 0, 1, 6, 9, 3, 8};
	cout << "------------------" << endl;
	cout << "  Selection Sort  " << endl;
	cout << "------------------" << endl;
	selection_sort(v, 10);
	print(10, v);
	return 0;
	
}