// How to create an object in heap

#include<bits/stdc++.h>
using namespace std;
 

class Rectangle{

    public:
    int length;
    int breadth;

    int area(){
        return length*breadth;
    }

    int perimeter(){
        return 2*(length+breadth);
    }

};

 


int main(){

    Rectangle *ptr;
    ptr = new Rectangle;

    Rectangle *q = new Rectangle();     //bracket can be given or remove




    ptr->length = 15;
    ptr->breadth = 10;
    cout<<"Area is : "<<ptr->area()<<endl;



return 0; 
}