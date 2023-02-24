#include<bits/stdc++.h>
using namespace std;
 

class Rectangle{

    public:
    int length;
    int breadth;

    int area(){
        return length*breadth;
    }

    int Perimeter(){
        return 2*(length+breadth);
    }

};

 


int main(){

    Rectangle r;
    Rectangle *ptr;

    ptr = &r;


    r.length = 10;
    ptr->breadth = 20;

    cout<<"Area is "<<r.area();
    cout<<"\nPerimeter is "<<ptr->Perimeter();






return 0; 
}