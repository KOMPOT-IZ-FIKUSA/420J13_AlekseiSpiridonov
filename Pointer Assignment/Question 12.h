/*

int* func() {
    return new int(5);
}

int main() {
    int* p = func();
    delete p;
    std::cout << *p;
}

Output: Runtime error or 5
No compillation error.
Might cause a runtime error if the system does not allow to access a deallocated heap memory cell.
No memory leak.
There is a dangling pointer p that points to a deallocated memory cell.

*/