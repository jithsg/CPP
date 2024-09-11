#include<iostream>
#include<string>
#include<vector>

// template<typename T1, typename T2>
// auto Multiply(T1 x, T2 y)->decltype(x*y){
//     if (x==0 || y==0) return 0;

//     return x*y;
// }

// int main(){
//     auto result {Multiply(10.0, 0.0)};
//     auto result1 {Multiply(10, 0)};
//     std::cout<<result<<std::endl;
//     std::cout<<typeid(result).name()<<std::endl;
//     std::cout<<typeid(result1).name()<<std::endl;
//     std::cout<<typeid(Multiply(10.5f, 20.5f)).name()<<std::endl;
//     return 0;
// }

// int main(){
//     int x= 5;
//     decltype(x) y = 10;
//     std::cout<<typeid(y).name()<<std::endl;

// // }

// auto Multiply(int x, int y){
//     return decltype(x*y) {x*y};
// }

// class Player{
//     public:
//     static const int mHealth {100};
// };


// int main(){
//     std::cout<<Player::mHealth<<std::endl;
//     return 0;
// }

// template<int R, int C>
// class Matrix{
//     public:
//     static const int Rows {R};
//     static const int Cols {C};

//     Matrix(){};
//     Matrix(int){};


//     bool operator==(int){return true;}

//     auto operator*(auto Other){
//         return Matrix<Rows, Other.Cols>{};
//     }
// };

// template <typename T1, typename T2>
// auto Multiply(T1 x, T2 y)->decltype(x*y){
//     if (x==0 || y==0) return 0;
//     return x*y;
// }

// int main(){
//   Matrix<3, 1> A;
//   Matrix<1, 3> B;
//   auto Result{Multiply(A, B)};

//   std::cout
//     << "Rows: " << Result.Rows
//     << "\nColumns: " << Result.Cols;
// }

class Character{
    private:
    std::string Name;

    virtual auto getName()const ->std::string {
        return Name;
    }

};

class Player: public Character{
    public:
    auto getName()const ->std::string override{
        return "Player";
    
}
};
int main(){
    Player p;
    std::cout<<p.getName()<<std::endl;
    return 0;
}
