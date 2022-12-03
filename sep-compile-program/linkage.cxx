/* File: a.cpp */
/* varaibles with file scope */
int x = 5; // may be used by another file, say, "b.cpp"
static int y = 10; // may NOT be used by another file

/* Definition of other functions */
int main() { /* main body */ }
/* Definition of some more functions */
