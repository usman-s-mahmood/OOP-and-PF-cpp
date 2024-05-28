class Complex
{
    int real, imaginary;
    public:
        friend void add(Complex o1, Complex o2);
        friend void sub(Complex o1, Complex o2);
        Complex(){};
        Complex(int x, int y): real(x), imaginary(y){};
        Complex(Complex &copy): real(copy.real), imaginary(copy.imaginary){};
        void getVals();
        void setVals(int a, int b);
        ~Complex(){};
};
void sub(Complex o1, Complex o2);
void add(Complex o1, Complex o2);