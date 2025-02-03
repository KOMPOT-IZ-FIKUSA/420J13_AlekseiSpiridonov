/*

void func(int*& p) {
    p = nullptr;
}

int main() {
    int a = 5;
    int* p = &a;
    func(p);
    std::cout << *p;
}

Output: Runtime error
Runtime error due to an attempt to derefence a null pointer to print it.
No memory leak. p doesn't point to a anymore, but a is allocated on stack.
No dangling pointer. p is set to nullptr

*/