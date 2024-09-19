#include<iostream>

class shape{
    public:
    virtual void draw() =0;


};


class circle: public shape{
    public:
    void draw() override{
        std::cout<<"Drawing a circle"<<std::endl;
    }
};

class square: public shape{
    public:
    void draw() override{
        std::cout<<"Drawing a square"<<std::endl;
    }
};

void displayshape(shape& s){
    s.draw();
}

int main(){
   circle c;
    square s;
    shape sp;
    // c.draw();
    // s.draw();
    displayshape(c);
    displayshape(s);
    return 0;

}