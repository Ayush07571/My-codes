class Complex{
    public:
        double real,imag;

    Complex add(Complex c)
    {
        Complex result;
        result.real=real  + c.real;
        result.imag = imag + c.imag;
        return result;
    }

    Complex subtract(Complex c)
    {
        Complex result;
        result.real = real - c.real;
        result.imag = imag - c.imag;
        return result;
    }

    Complex multiply(Complex c)
    {
        Complex result;
        result.real = real * c.real - imag * c.imag;
        result.imag = real*c.imag + imag*c.real;
        return result;
    }
};