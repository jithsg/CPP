#include <iostream>
#include <memory>

struct Subresource{

    Subresource(){
        std::cout << "Subresource constructor" << std::endl;
    }
    Subresource (const Subresource& other){
        std::cout << "Subresource copy constructor" << std::endl;
    }

};

struct Resource{
    std:: unique_ptr<Subresource> sub;
    Resource(): sub(std::make_unique<Subresource>()){
        std::cout << "Resource constructor" << std::endl;
       
    }
    Resource (const Resource& Source): sub(std::make_unique<Subresource>(*Source.sub)){
        std::cout << "Resource copy constructor" << std::endl;
    }

};





int main(){
    std::cout<<"Subresource SubA;"<<std::endl;    
    Subresource SubA;

    std::cout<<"Subresource SubB"<<std::endl;

    Subresource SubB{SubA};

}