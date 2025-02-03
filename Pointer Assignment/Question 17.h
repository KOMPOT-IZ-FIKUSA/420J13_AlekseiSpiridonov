/*

class Test {
    int* data;
public:
    Test(int value) {
        data = new int(value);
    }
    ~Test() {
        delete data;
    }
    void setValue(int value) {
        *data = value;
    }
    int getValue() {
        return *data;
    }
};

int main() {
    Test t1(5);
    Test* t2 = new Test(10);
    t1.setValue(15);
    t2->setValue(20);
    std::cout << t1.getValue() << " " << t2->getValue();
    delete t2;
}

Output:15 20
No error.
No memory leak.
No dangling pointer.

*/