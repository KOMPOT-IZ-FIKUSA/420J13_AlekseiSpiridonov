/*

class A {
    int* x;
public:
    A(int value) {
        x = new int(value);
    }
    ~A() {
        delete x;
    }
};

class B {
    A* obj;
public:
    B(int value) {
        obj = new A(value);
    }
    ~B() {
        delete obj;
    }
};

int main() {
    B b1(5);
    B* b2 = new B(10);
    delete b2;
}

Output:15 20
No error.
No memory leak.
No dangling pointer.

*/