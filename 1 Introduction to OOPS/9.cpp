// this pointer

#include<iostream>
using namespace std;


class Rectangle{
    private:
    int length;
    int breadth;


    public:
    Rectangle(int length=1, int breadth=1){
        this->length = length;
        this->breadth = breadth;
    }

    int area(int l, int b);


};


int Rectangle::area(int l, int b){
    return length * breadth;
}




int main(){






return 0;
}