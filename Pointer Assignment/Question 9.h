/*

int* func() {
    int a = 5;
    return &a;
}

int main() {
    int* p = func();
    std::cout << *p;
}

Output: runtime error or 5
No compilation error
Runtime error due to an attempt to access a deallocated stack memory.
Runtime error might not happen if the system still allows to access that deallocated memory.
No memory leak.
p is a dangling pointer.

*/