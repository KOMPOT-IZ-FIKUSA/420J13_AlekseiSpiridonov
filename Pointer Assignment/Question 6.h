/*

int* p = new int(5);
int* q = p;
delete p;

Output:
No error.
There is no memory leak.
There are 2 dangling pointers p, q that point to the memory that was allocated for p, but then deallocated.

*/