/*

int a = 5;
int* p = nullptr;
int** pp = &p;
**pp = a;

Output: Runtime error
No compilation error.
Runtime error trying to assign a to a value of a nullptr:

**pp = a; -> *p = a; -> *nullptr = a;

No memory leak.
No dangling pointer.

*/