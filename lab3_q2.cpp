

//include the library 
#include<iostream>
using namespace std;
//write the main function
int main() {
int a,b,sum,substract,product,division,remainder ; //declaration

 a=7;
 b=3;
 sum= a+b; //add 2 numbers
 product= a*b; //gives product
division=a/b; //gives division
substract=a-b; //gives difference
remainder=a%b; //remainder of division

cout << "the sum of " << a << " and " << b << "is " << sum << endl ;
cout << "the product of " << a << "and " << b << " is " << product << endl ;
cout << " the division of " << a << "and " << b << "is" << division << endl;
cout << "the substract of " <<a << "and " <<b << "is " << substract << endl;
cout << "the remainder of " << a << "and " << b << " is" << remainder << endl;
return 0;
}
