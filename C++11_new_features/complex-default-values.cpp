class Complex {   /* File : complex-default-values.cpp  */
  private:
    double real, imag;
  public:
    Complex(double real = 0.0, double imag = 0.0) : real(real), imag(imag) {}
};

int main() {
  Complex c1;
  Complex c2(1.0);
  Complex c3(1.0, 2.0);  
}
