// execution of swap is 
// equivalent to running
// the following codes
int& a = x;
int& b = y;
int temp = a;
a = b;
b = temp;

// OR, equivalently
int temp = x;
x = y;
y = temp;
