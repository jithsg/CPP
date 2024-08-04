#include "Animal.h"

Animal :: Animal(string name, int age) : mName(name), mAge(age) {
    cout << "Animal created" << endl;
}
int main() {
    Animal a("Fido", 3);
    return 0;

}