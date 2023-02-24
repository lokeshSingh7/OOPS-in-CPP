#include<bits/stdc++.h>
using namespace std;
 

class Rectangle{
    private:
    int length;
    int breadth;

    public:
    // Propert function 
    // set      --  Accessor
    // get      --  Mutator

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

};

 


int main(){

    Rectangle r;

    r.setLength(10);
    r.setBreadth(-5);


    cout<<r.getLength()<<endl;
    cout<<r.getBreadth()<<endl;







  

return 0; 
}