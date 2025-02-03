/*

int* p = new int(5);
p = new int(10);

Output:
No error.
There is a memory leak: the first memory address allocated for integer value 5 was forgotten forever :(
No dangling pointer.

*/