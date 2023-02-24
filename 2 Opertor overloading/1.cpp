// Operator overloading

#include<iostream>
using namespace std;


class Complex{
    private:
    int real, img;

    public:
    Complex(int r=0, int i=0){
        this->real = r;
        this->img = i;
    }

    Complex add(Complex x){
        Complex temp;
        temp.real = real + x.real;  
        temp.img = img + x.img;
        return temp;
    }


    Complex operator + (Complex const &x){
        Complex temp;
        temp.real = this->real + x.real;
        temp.img = this->img + x.img;
        return temp;
    }


    void display(){
        cout<<this->real<< "+"<<this->img<<"i"<<endl;
    }


};





int main(){
    Complex c1(10,5), c2(2,4), c3, c4;


    // c3 = c2.add(c1);
    c3 = c1.add(c2);
    c3.display();
    

    c4 = c2 + c1;
    c4.display();



return 0;
}