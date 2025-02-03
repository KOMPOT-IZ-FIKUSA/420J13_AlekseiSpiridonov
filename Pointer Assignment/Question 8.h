/*

void func(int* p) {
    *p = 10;
}

int main() {
    int a = 5;
    func(&a);
    std::cout << a;
}

Output:10
No error.
No memory leak.
No dangling pointer.

*/