// import iostream library
#include <iostream>


int main(){
    // print `Abraham Audu` ten times
    for (int i=0; i <= 10; i++){
        std::cout << "Abraham Audu" << std::endl; 
    }
    /*
        This is a block comment
        Just for the fun of it 
    */

    // Runtime error
    int c = 7/0;
    std::cout << "Value: " << c << std::endl;
    return 0;
}