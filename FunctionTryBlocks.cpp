#include<iostream>
#include<stdexcept>
using namespace std;

// void ThrowException(){
//         throw invalid_argument("An error occurred");
// }



// void MyFunction()try{
//    ThrowException();

// }

//     catch(invalid_argument &error){
//     cout << "Caught an invalid argument: " << error.what() << endl;
//    } 

//     catch(logic_error &e){
//         cout<< "Caught a logical_error: " << e.what() <<endl;
//     }


// int main()
// {
// MyFunction();
// }

int Div(int x, int y){
    try{
        if (y!=0){
            return y/x;
        }
        else throw invalid_argument("Division by zero");
    }
    catch(invalid_argument &e){
        cout<<e.what()<<endl;
        return -1;
    }
}


int main(){
     Div(1,0);
}