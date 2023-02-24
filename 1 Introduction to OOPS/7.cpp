// Scope resolution operator
// Types of function in a class

#include<iostream>
using namespace std;



class Rectangle{
    private: 
    int length;
    int breadth;

    public:
    // constructor
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &rect);

    // Mutator
    void setLength(int l);
    void setBreadth(int b);

    // Accessor
    int getLength(){return length;};
    int getBreadth(){return breadth;};

    // Facilitator
    int area();
    int perimeter();

    // Enquiry
    bool isSquare();

    // Destructor
    ~Rectangle();

};


Rectangle::Rectangle(){
    length = 1;
    breadth = 1;
}
Rectangle::Rectangle(int l, int b){
    length = l;
    breadth = b;
}
Rectangle::Rectangle(Rectangle &rect){
    length = rect.length;
    breadth = rect.breadth;
}

void Rectangle::setLength(int l){
    length = l;
}
void Rectangle::setBreadth(int b){
    breadth = b;
}

int Rectangle::area(){
    return length*breadth;
}
int Rectangle::perimeter(){
    return length*breadth;
}
bool Rectangle::isSquare(){
    return length==breadth;
}

Rectangle::~Rectangle(){
    cout<<"Rectangle destroyed"<<endl;
}





int main(){
    Rectangle r1(10,10);
    
    cout<<"Area "<<r1.area()<<endl;
    
    if(r1.isSquare()){
        cout<<"Yes it is square"<<endl;
    }else{
        cout<<"No it is not square "<<endl;
    }




return 0;
}


