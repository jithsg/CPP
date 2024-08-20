#include<memory>
#include<iostream>  
using namespace std;


struct Subresource{
    Subresource(){
        cout<<"Subresource constructor called"<<endl;
    }

    Subresource(const Subresource& Source){
        cout<<"Copying Subresource (expensive!)"<<endl;
    }
};


class Resource{
    public:

    unique_ptr<Subresource> sub;
    Resource(): sub(make_unique<Subresource>()){
        cout<<"Resource constructor called"<<endl;
    }

    Resource(const Resource& Source): sub(make_unique<Subresource>(*Source.sub)){ 
        cout<<"Resource copy constructor called"<<endl;
    }

    Resource(Resource&& Source): sub(move(Source.sub)){
        cout<<"Resource move constructor called"<<endl;
    }
    ~Resource(){
        cout<<"Resource destructor called"<<endl;
    
    }
    Resource& operator=(Resource&& Source){

        cout<<"Resource copy assignment operator called"<<endl;
        sub = move(Source.sub);
 
        return *this;
    }

};

int main(){
    cout<<"Resource Original;"<<endl;
    Resource Original;
    cout<<"Copying Resource"<<endl;
    Resource ResA{Original};
    if (Original.sub.get()){
        cout<<"Original still has its subresource"<<endl;
    }
    cout<<"Moving Original"<<endl;
    Resource ResB{move(Original)};
    if (!Original.sub.get()){
        cout<<"Original no longer has its subresource"<<endl;
    }
    ResB = move(ResA);
}