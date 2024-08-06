#include <iostream>
using namespace std;

enum class Color {
    RED,
    GREEN,
    BLUE
};


int main(){
    Color my_color = Color :: RED;
    if (my_color == Color :: RED){
        cout << "Color is red" << endl;
    }

}