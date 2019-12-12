/*
 * Just simple solar panel calculator
 * Author: Anatolii Burdeiny
 * bioname@gmail.com
 * 2019-12-12
 */

#include <iostream>
#include <string>
#include <limits>

// simple function for getting unsigned integer input from user and show a message text before

unsigned int inputValue( std::string message ){
								int result = 0;
								do{
																std::cout << message;
																if ( !( std::cin >> result) ) {
																								std::cin.clear();
																								std::cin.ignore(std::numeric_limits<unsigned int>::max(), '\n');

																								std::cerr << "Please enter positive number. Try Again."<< std::endl;
																}
																std::cout << "You enter "<< result << std::endl;
								}while( result<=0 );
								return (unsigned)result;
}
