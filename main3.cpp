#include <iostream>
using namespace std;

// class Base {
// public:
//     void show() {  // Virtual function
//         cout << "Base class show function" << endl;
//     }

//     void display() {  // Non-virtual function
//         cout << "Base class display function" << endl;
//     }
// };

// class Derived : public Base {
// public:
//     void show() {  // Override virtual function
//         cout << "Derived class show function" << endl;
//     }

//     void display() {  // Override non-virtual function
//         cout << "Derived class display function" << endl;
//     }
// };

// int main() {
//     Base* basePtr;
//     Derived derivedObj;
//     basePtr = &derivedObj;

//     basePtr->show();     // Calls Derived class show function (dynamic binding)
//     basePtr->display();  // Calls Base class display function (static binding)

//     return 0;
// }


class Base {
public:
   void show() {  // Virtual function
      cout << "Base class show function" << endl;
   }

   void display() {  // Non-virtual function
      cout << "Base class display function" << endl;
   }

};

class Derived : public Base {
  public:
    void show(){
      cout << "Derived class show function" << endl;
    }
    void display(){
      cout << "Derived class display function" << endl;
    } 
};



int main(){
  Base* basePtr;
  Derived derivedObj;
  basePtr = &derivedObj;

  basePtr->show();
  basePtr->display();
  return 0;

}