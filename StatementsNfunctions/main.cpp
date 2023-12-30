// import iostream library
#include <iostream>


int addNumbers(int first_param, int second_param){

    int result = first_param + second_param;
    return result;
}

int printNum(int num){
    std::cout << num << std::endl;

    return 0;
}

int main(){

    int first_number {13}; // Statement
    int second_number {7};

    std::cout << "first number: " << first_number << std::endl;
    std::cout << "second number: " << second_number << std::endl;

    int sum = first_number + second_number;
    std::cout << "Sum: " << sum << std::endl;

    sum = addNumbers(25, 7);
    std::cout << "Sum from function: " << sum << std::endl;

    sum = addNumbers(30, 54);
    printNum(sum);
    std::cout << "Sum from function: " << sum << std::endl;

    return 0;
}