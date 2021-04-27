#include <iostream>

//using nampspace std; (then you dont need to use std:: not proper ? *)

int main()
{
    //getting the intial number 
    int numberOne;
    std::cout << "Please enter 3 numbers in ascending order.\n";
    std::cout << "Please enter 1st number: ";
    std::cin >> numberOne;

    //getting the second number then running while loop till parameters met
    int numberTwo;
    std::cout << "Please enter 2nd number: ";
    std::cin >> numberTwo;
    while (numberOne >= numberTwo) {
        std::cout << "It is smaller than the first number. Please try again.\n";
        std::cout << "Please enter 2nd number: ";
        std::cin >> numberTwo;

    }
    //getting third number 
    int numberThree;
    std::cout << "Please enter 3rd number: ";
    std::cin >> numberThree;
    while (numberTwo >= numberThree) {
        std::cout << "It is smaller than the second number. Please try again.\n";
        std::cout << "Please enter 3nd number: ";
        std::cin >> numberThree;

    }

    //outputting all three with delimiters and text 
    std::cout <<"The 3 ascending numbers are: " << numberOne << " - " << numberTwo << " - " << numberThree;

    
    
    
    
   
}