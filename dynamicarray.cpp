#include<iostream>
using namespace std;

struct vector{
  int x;
  int y;
  int z;
};

vector operator+(const vector &a, const vector &b){
  vector result;
  result.x = a.x + b.x;
  result.y = a.y + b.y;
  result.z = a.z + b.z;
  return result;
 
}

int main(){
vector a{1,2,3};
vector b{4,5,6};

vector c = a + b;
cout << c.x << " " << c.y << " " << c.z << endl;
return 0;

}