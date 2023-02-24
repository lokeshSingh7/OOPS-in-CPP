// Constructor

#include<bits/stdc++.h>
using namespace std;


class Rectangle{
    private:
    int length;
    int breadth;

    public:
/*
    // Non-argument constructor
    Rectangle(){
        length = 1;
        breadth = 1;
    }

    // parametrised contructor
    Rectangle(int l, int b){
        setLength(l);
        setBreadth(b);

    }
*/

    Rectangle(int l=1, int b=1){
        setLength(l);
        setBreadth(b);
    }



    // copy constructor
    Rectangle(Rectangle &rec){
        length = rec.length;
        breadth = rec.breadth;
    }







    void setLength(int l){
        length = (l>=0) ? l : 0;
    }

    void setBreadth(int b){
        breadth = (b>=0) ? b : 0;
    }

    int getLength(){
        return length;
    }

    int getBreadth(){
        return breadth;
    } 
    
    int area(){
        return length*breadth;
    }

    int parameter(){
        return 2*(length+breadth);
    }

};

 


int main(){




    Rectangle r1;
    cout<<r1.area()<<endl;
    
    Rectangle r2(3,5);
    cout<<r2.area()<<endl;

    Rectangle r3(r2);
    cout<<r3.area()<<endl;








  

return 0; 
}