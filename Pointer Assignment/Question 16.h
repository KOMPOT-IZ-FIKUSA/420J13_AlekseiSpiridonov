/*

int** pp = nullptr;
**pp = new int(5);

Output: Runtime error
No compilation error.
Runtime error when tried to dereference nullptr before assigning a value:

**pp = new int(5); -> *nullptr = new int(5);

No memory leak.
No dangling pointer.

*/