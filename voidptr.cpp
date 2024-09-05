#include<iostream>


template<typename T>
T* typeconvert(void* ptr){
    return static_cast<T*>(ptr);
}

int main(){
//     int x  = 42;
//     void*ptr0 {nullptr};
//     void* ptr = &x;
//    std::cout<< *(static_cast<int*>(ptr))<<std::endl;

//    if (ptr0) {
//        std::cout<<"ptr0 is not null"<<std::endl;
//        std::cout<<ptr0<<std::endl;
//    }
//    else{
//        std::cout<<"ptr0 is null"<<std::endl;
//        std::cout<<ptr0<<std::endl;

//    }
    int x = 42;
    void* ptr = &x;
    int* ptr2 = typeconvert<int>(ptr);
    std::cout<<*ptr2<<std::endl;

    float y = 3.14f;
    ptr = &y;
     std::cout<< *(typeconvert<int>(ptr))<<std::endl;
    

}

