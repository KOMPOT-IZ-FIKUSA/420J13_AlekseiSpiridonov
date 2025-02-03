/*

void func(int* p) {
    int b = 10;
    p = &b;
}

int main() {
    int a = 5;
    int* p = &a;
    func(p);
    std::cout << *p;
}

Output:5
No error.
No runtime error.
No memory leak.
No dangling pointer.

*/