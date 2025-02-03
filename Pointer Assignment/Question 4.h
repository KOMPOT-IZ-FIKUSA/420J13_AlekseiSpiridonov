/*

int a = 10;
float* p = (float*)&a;
std::cout << *p;

Output: A floating point number, made out of the bits that represent integer number 10
Output: 1.4013e-44
No error since both types (int and float) have size of 4 bytes.
No memory leak
No dangling pointer

*/