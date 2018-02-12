#include <iostream>

int main() {
    
    // Request block of memory of size 10
    int *array = new int[10];
    
    
    for (int i=0; i <10; i++){
        array[i] = 100+1;
        std::cout << "value int[" << i << "] = " << array[i] << std::endl;
    }
    
    
    //returns the value of the first element in location '0'
    std::cout << "value after allocation " << *array;
    
    //you free the block of allocated memory
    delete[] array;
    
    std::cout << std::endl;
    
    std::cout << "value after deallocation " << *array;
    
}
