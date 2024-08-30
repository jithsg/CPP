#include<iostream>
#include<exception>
using namespace std;


void level1(){
    std::cout << "Level 1" << std::endl;
    try {
        throw runtime_error("Error in level 1");
    }
    catch (runtime_error &e){
        std::cout << "Caught in level 1: " << e.what() << std::endl;
        throw; // Rethrow the exception
    }

}


void level2(){
    cout << "Level 2" << endl;
    try {
        level1();
    }
    catch (runtime_error &e){
        std::cout << "Caught in level 2: " << e.what() << std::endl;
     // Rethrow the exception
    }
}

int main(){

        level2();
        return 0;

}