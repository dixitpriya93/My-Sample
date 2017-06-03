#include <iostream>
#include <conio.h>
 using namespace std;
 
 int a, b, c;
 int main()
 {
	 cout << "Enter your numbers here \n";
	 cin >> a;
	 cin.ignore();
	 cin >> b;
	 cin.ignore();
	 c = a + b;
	 cout << " Sum is " << c;
	 return 0;
	
 }