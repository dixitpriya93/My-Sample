#include <iostream>
#include <conio.h>
 using namespace std;
 
 int a, b, c, d;
 int main()
 {
	 cout << "Enter your numbers here \n";
	 cin >> a;
	 cin.ignore();
	 cin >> b;
	 cin.ignore();
	 c = a + b;
	 d = a;
	 cout << " Sum is " << c;
	 return 0;
	
 }