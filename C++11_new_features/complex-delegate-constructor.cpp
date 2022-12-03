class Complex {   /* File : complex-delegate-constructor.cpp  */
  private:
    double real, imag;
  public:
    Complex(double real, double imag) : real(real), imag(imag) {}
	// Call Complex(double real, double imag)
    Complex(double real) : Complex(real, 0.0) {}
	// Call Complex(double real)
    Complex() : Complex(0.0) {}
};

int main() {
  Complex c1;
  Complex c2(1.0);
  Complex c3(1.0, 2.0);  
}
