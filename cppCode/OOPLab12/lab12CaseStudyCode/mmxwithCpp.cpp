#include<iostream>

using namespace std;

int main()
{
    int a = 5, b = 7;
    cout<<"Before Swapping, a is: "<<a<<endl<<"b is: "<<b<<endl;
    __asm(
        "mov eax, a"
        "mov ebx, b"
        "mov b, eax"
        "mov a, ebx"
        // "movl %0, %%eax;"
        // "movl %1, %%ebx;"
        // "movl %%ebx, %0;"
        // "movl %%eax, %1;"
        // : "=r" (a), "=r" (b)
        // : "0" (a), "1" (b)
        // : "%eax", "%ebx"
    );
    cout<<"After Swapping, a is: "<<a<<endl<<"b is: "<<b<<endl;
    return 0;
}