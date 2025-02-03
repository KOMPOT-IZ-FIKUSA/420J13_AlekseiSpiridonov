/*

void func() {
    int* p = new int(5);
}

int main() {
    func();
}

Output:
No error.
There is a memory leak, caused by an allocated by func memory, that is not pointed from anywhere later.
There is no dangling pointer.

*/