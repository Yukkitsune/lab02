#include <iostream>
#include <string>
int main(int argc, char** argv)
{
	std::string name; // name variable
	std::cout<<"Enter your name:";
	std::cin >> name; // input name
	std::cout<<"Hello world from "<<name<<std::endl;
	return 0;
}
