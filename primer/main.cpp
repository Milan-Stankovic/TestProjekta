#include <iostream>

using namespace std;

class A{

public :
    static int b,c;
public :
    A(){b=b; c=c;}
    int razllikaCB(){return c-b;}
    void incCB(int i){ b++; c++;}
};

int A::b=-5;
int A::c=5;

class B{

protected :
    int a;
public :
    B(){
        a=8;
    }
    virtual void ispis()=0;

};

class C:public B{

private :
    int b;
public:
    C():B(){
        b=5;
    }
    void ispis(){
        cout<<"A je : "<<a<< " B je : "<<b<<endl;
    }

};

class T{

public:
    static int t;
    T(){t=0;}

    T(int tt){t+=tt;}
};

void printT(T t){
    cout<<t.t;
}
int T::t=1;
int main()
{
 /*  A a1, a2;

   a1.incCB(2);
   a2.incCB(2);
   cout<<a2.razllikaCB()<<a1.razllikaCB()<<endl;
*/
/*
    C c;
    c.ispis();
    */
    T t(2), t2(1), t3(0);
    printT(t);
    printT(t2);
    printT(t3);
    return 0;
}
