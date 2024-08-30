#include <iostream>
#include <stdexcept>
using namespace std;    

void may_throw(){
    throw runtime_error("Exception thrown from may_throw()");
}

int main(){
    exception_ptr eptr;
    try{
        may_throw();
    }
    catch(...){
        cout << "Handled by main" << endl;
        eptr= current_exception();
    }


if (eptr) {
    try{
        rethrow_exception(eptr);
    }
    catch(const exception &e){
        cout << "Handled by main again!" << endl;
    }
}
}