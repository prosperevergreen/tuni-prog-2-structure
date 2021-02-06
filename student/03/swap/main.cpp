#include <cstdlib>
#include <iostream>

// Write your swap function here.
void swap(int& num1, int& num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
}


#ifndef UNIT_TESTING
int main()
{
    std::cout << "Enter an integer: ";
    int i = 0;
    std::cin >> i;

    std::cout << "Enter another integer: ";
    int j = 0;
    std::cin >> j;

    swap(i, j);
    std::cout << "The integers are " << i << " and " << j << std::endl;

    return EXIT_SUCCESS;
}
#endif
