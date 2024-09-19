#include<iostream>

class shape{
    public:
    virtual void draw() const{
        std::cout<<"Drawing a shape"<<std::endl;
    }

};


class circle: public shape{
    public:
    void draw() const override{
        std::cout<<"Drawing a circle"<<std::endl;
    }
};

class sqaure: public shape{
    public:
    void draw() const override{
        std::cout<<"Drawing a square"<<std::endl;
    }
};

void displayshape(const shape& s){
    s.draw();
}

int main(){
   circle c;
    sqaure s;
    // c.draw();
    // s.draw();
    displayshape(c);
    displayshape(s);
    return 0;

}