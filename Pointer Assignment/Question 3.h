/*

int* p = new int(5);
delete p;
*p = 10;

The program tries to assign a value to a memory cell pointing to a deleted pointer.
This might or might not cause an error, depending on whether the memory cell is accessible for the program's process.

No compilation error.
Might be a runtime error depending on where this code is executed.

No memory leak.
There is a dangling pointer, that points to deallocated memory.

*/