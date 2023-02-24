// Scope resolution operator

#include<iostream>
using namespace std;


class Rectangle{
    public: 

    // inline function
    int fun1(){
        cout<<"Inline function"<<endl;
    }

    // inline
    inline void print(){
        cout<<"Hello jii"<<endl;
    }

    // non-line function
    int fun2();

};


int Rectangle :: fun2(){
    cout<<"Non-inline function"<<endl;
}




int main(){

    Rectangle test;

    test.fun1();
    test.fun2();



return 0;
}



