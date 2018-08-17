//include library
#include <iostream>
using namespace std;
int main()
//process
{
//declaring variable
int a=1;
char b='2';
float c=2.007;
double d=2.01;
bool e=0;
//will get size of variable
cout << "size of char:" << sizeof(char) <<" bits" << " contents of a=" << a <<endl;
cout << "size of int:" << sizeof(int) <<" bits" << " contents of b=" << b <<endl;
cout << "size of float:" << sizeof(float) <<" bits" << " contents of c=" << c <<endl;
cout << "size of double:" << sizeof(double) <<" bits" << " contents of d=" << d <<endl;
cout << "size of bool:" << sizeof(bool) <<" bits" << "contents of e=" << e <<endl;
return 0;
}
