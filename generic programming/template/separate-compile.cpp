/* File: larger.h */
template <typename T> inline const T& 
    larger(const T& a, const T& b);

/* File: larger.cpp */
template <typename T> inline const T&
    larger(const T& a, const T& b) { return (a < b) ? b : a; }
