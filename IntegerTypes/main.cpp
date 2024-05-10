#include <iostream>

int main(){
    /*
    // Braced intializers
    
    // Variable may contain random garbage value. WARNING.
    int elephant_count;

    int lion_count{}; // initializes to zero

    int dog_count {10}; // intializes to 10

    int cat_count {15}; // initializes to 15

    // can use expression as initializer
    int domestiated_animals {dog_count + cat_count};

    // int narrow_conversion {2.9};
    std::cout << "Elephant count: " << elephant_count << std::endl;
    std::cout << "Lion count: " << lion_count << std::endl;
    std::cout << "Dog count: " << dog_count << std::endl;
    std::cout << "Cat count: " << cat_count << std::endl;
    std::cout << "Domesticated animals count: " << domestiated_animals << std::endl;
    */

    // Functional Initialization
    /*
    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count + orange_count);

    // Information Lost. Less safe than braced initializers
    int narrow_conversion_functional(2.9);

    std::cout << "Apple count: " << apple_count << std::endl;
    std::cout << "Orange count: " << orange_count << std::endl;
    std::cout << "Fruit count: " << fruit_count << std::endl;

    std::cout << "Narrowing conversion: " << narrow_conversion_functional << std::endl;
    */

    // Assignment initialization
    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;
    int narrowing_conversion_assignment = 2.9;

    std::cout << "Bike count: " << bike_count << std::endl;
    std::cout << "Truck count: " << truck_count << std::endl;
    std::cout << "Vehicle count: " << vehicle_count << std::endl;

    std::cout << "Narrowing Conversion: " << narrowing_conversion_assignment << std::endl;

    // Check the size with sizeof
    std::cout << "sizeof int: " << sizeof(int) << std::endl;
    std::cout << "sizeof truck_count: " << sizeof(truck_count) << std::endl;

    return 0;
}