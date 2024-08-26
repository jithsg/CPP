#include<iostream> 

template<typename T>
void Render(T object){
    std::cout << "Template function called" << std::endl;
    object.Render();
}

void Render(float x){
    std::cout << "Non template function called" << std::endl;
}

int main(){
    Render(1.0);
    return 0;
}