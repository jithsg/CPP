#include <iostream>
#include<algorithm>
#include<vector>

int proj_add(int& i){
    return i+=1;
}

int disp(int i){
    return i;
}
int main(){
    std::vector<int> v={1,2,3,4,5};

    // std::ranges::for_each(v, [](int i){std::cout<<i<<" ";});



    std::ranges::for_each(v, disp, proj_add);
    for (int i : v) {
        std::cout << i << ' ';
    }

    return 0;

}