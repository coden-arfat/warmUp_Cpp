#include <iostream>
int main()
{
 int x = 123;
 x++; // add 1 to the value of x
 std::cout << "The value of x is: " << x;
 ++x; // add 1 to the value of x
 std::cout << "The value of x is: " << x;
 --x; // decrement the value of x by 1
 std::cout << "The value of x is: " << x;
 x--; // decrement the value of x by 1
 std::cout << "The value of x is: " << x;
}