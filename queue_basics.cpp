#include<iostream>
#include<queue>

int main(){
    using std::cout, std::endl;

    std::queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    cout<<"First element: "<<q.front()<<endl;
    cout<<"Last element: "<<q.back()<<endl;
    cout<<"Size: "<<q.size()<<endl;
    q.pop();
    cout<<"Size: "<<q.size()<<endl;

}