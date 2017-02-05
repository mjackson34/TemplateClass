#include <iostream>

using namespace std;

template<class T/*, int size = 3*/>
class Polynomial {
private:
    //T firstPoly[size];
    //T secondPoly[size]

public:
    Polynomial();
    void addPolynomial(T ax, T bx, T cx, T ay, T by, T cy);
    void multiplyPolynomial(T ax, T bx, T cx, T ay, T by, T cy);


};
template<class T>
Polynomial<T>::Polynomial() {};

template<class T>
void Polynomial<T>::addPolynomial(T ax, T bx, T cx, T ay, T by, T cy) {
    T a = ax + ay;
    T b = bx + by;
    T c = cx + cy;
    cout << a << "x^2" << " + " << b << "x" << " + " << c << endl;
}

template<class T>
void Polynomial<T>::multiplyPolynomial(T a, T b, T c, T d, T e, T f) {
    //ax^2 + bx + c | dx^2 + ex + f
    //ax^2 * ay^2 = (ad)x^4
    //(ae + bd)x^3
    //(af + cd + be)x^2
    //(bf + ce)x
    // cf
    cout << (a * d) << "x^4 + " << ((a * e) + (b * d)) << "x^3 + " << ((a * f) + (c * d) + (b * e)) << "x^2 + " << ((b * f) + (c * e)) << "x + " << c*f <<endl;
}

int main()
{
    Polynomial<int> poly;
    poly.addPolynomial(2,2,2,3,3,3);
    poly.multiplyPolynomial(2,2,2,3,3,3);

    Polynomial<float> polyFloat;
    polyFloat.addPolynomial(2.1,2.2,2.3,3.1,3.2,3.3);
    polyFloat.multiplyPolynomial(2.1,2.2,2.3,3.1,3.2,3.3);
    cout << "Hello world!" << endl;
    return 0;
}
