#include<iostream>
#include<queue>

int main(){
    using std::cout, std::endl;
    std::priority_queue<int> pq;

    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);

    cout<<"Size: "<<pq.size()<<endl;
    cout<<"Top: "<<pq.top()<<endl;
    
}