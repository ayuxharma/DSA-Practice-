//L43

//ENCAPSULATION
/*#include <iostream> 
using namespace std ;

class student {

    private:
    int age ;
    int height ;
    string name ;

    public:
    int getAge() {
        return this-> age ;
    }
} ;


int main() {

    student first ;
    cout << "sab sahi chal rha h" << endl;

    return 0 ;
}
*/

//2.INHERITANCE
/* #include <iostream>
using namespace std ;

class human {

    public:
    int height;
    int weight;
    int age;

    public:
    int getAge() {
        return this-> age ;
    }
    void setweight(int w) {
        this -> weight = w ;
    }
} ;

class male : public human {

    public:
    string color;

    void sleep(){
        cout << "male is sleeping" <<endl ;
    }

};

int main () {

    male object1 ;
    
    cout << object1.age << endl;
    cout << object1.height << endl;
    cout << object1.weight << endl;
    cout << object1.color << endl;

    object1.sleep() ;
    object1.setweight(84) ;
    cout << object1.weight << endl;

    return 0 ;
} */

//3.POLYMORPHISM

#include <iostream>
using namespace std ;

//function overloading
/* class A {

    public: 
    void sayhello() {
        cout << "hello ayush.jpg" << endl;
    }

    void sayhello(string name) {
        cout << "hello ayush" << endl;
    }

};

int main () {

    A obj ;
    obj.sayhello() ;

    return 0 ;
} */

//operator overloading

/* class B {
    public:
    int a ;
    int b ;

    public:
    int add() {
        return a+b ;
    }

    void operator + (B &obj) {
        int value1 = this-> a;
        int value2 = obj.a ;
        cout << "output " << value2-value1 << endl;
    }

};

int main () {

    B obj1 , obj2 ;

    obj1.a = 4 ;
    obj2.a = 7 ;

    obj1+obj2 ;
} */

//run time polymorphism

class animal {
    public:
    void speak () {
        cout << "speaking" << endl;
    }
};

class dog : public animal {

    public:
    void speak () {
        cout << "barking " << endl;
    }
};

int main () {

    dog obj ;
    obj.speak() ;

    return 0 ;
}