<<<<<<< HEAD
#include <iostream> // in and out stream
#include <string> // string library
int
main (int argc, char **argv)
=======
#include <iostream>// libraries
#include <string>
int main(int argc, char** argv)
>>>>>>> 8c2b180 (Deleted some comments)
{
  std::string name; // variable name
  std::cout << "Enter your name:";
  std::cin >> name; // input name
  std::cout << "Hello world from " << name << std::endl;
  return 0;
}
