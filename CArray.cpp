#include <iostream>
using namespace std;

void func(int arr[]) {
    // This will output the size of a pointer, not the size of the array
    cout << "Size inside func (size of pointer): " << sizeof(arr) << " bytes" << endl;
}

int main() {
    std::size_t Length{5};
    int SomeArray[Length] = {1, 2, 3, 4, 5};

    // This will correctly output the size of the entire array
    std::cout << "Size in main (size of array): " << sizeof(SomeArray) << " bytes" << std::endl;
    
    func(SomeArray);  // Passing array to the function
    
    return 0;
}
