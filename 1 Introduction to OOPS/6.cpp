// Deep copy contructor

#include<iostream>
using namespace std;


class Test{
    int a;
    int *p;

    public:
    Test(int x){
        a = x;
        p = new int [a];
    }

    Test(Test &t){
        a = t.a;

        // p = t.p;                 //shallow copy
        p = new int[a];             //Deep copy
    }

};


int main(){
    
    Test t(5);
    Test t2(t);






return 0;
}