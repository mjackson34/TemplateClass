/*
CIS269
Matthew Jackson
2/5/2017

Create a class template for polynomials of degree 2 (ax^2 + bx + c) . Add addition, and multiplication capability.

Notes:
I created this in a single file for ease of use instead of breaking it into a class, header, and driver files.
I did not think it warrented that since it is a simple exercise.

I used SmartGit for creating my local repository, and committing, pushing, and merging in my changes.
*/

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
    //Test Cases 1-2
    Polynomial<int> poly;
    poly.addPolynomial(2,2,2,3,3,3);
    poly.multiplyPolynomial(2,2,2,3,3,3);

    //Test Cases 3-4
    //Polynomial<float> polyFloat;
    //polyFloat.addPolynomial(2.1,2.2,2.3,3.1,3.2,3.3);
    //polyFloat.multiplyPolynomial(2.1,2.2,2.3,3.1,3.2,3.3);

    //Test Cases 5-6
    //Polynomial<double> polyDouble;
    //polyDouble.addPolynomial(2.12,2.22,2.32,3.12,3.22,3.32);
    //polyDouble.multiplyPolynomial(2.12,2.22,2.32,3.12,3.22,3.32);

    //Test Cases 7-8
    //Polynomial<int> polyNegative;
    //polyNegative.addPolynomial(-2,-2,-2,-3,-3,-3);
    //polyNegative.multiplyPolynomial(-2,-2,-2,-3,-3,-3);

    //Test Cases 9-10
    //Polynomial<int> polyFirstNegative;
    //polyFirstNegative.addPolynomial(-2,-2,-2,3,3,3);
    //polyFirstNegative.multiplyPolynomial(-2,-2,-2,3,3,3);

    //Test Cases 11-12
    //Polynomial<int> polyAlpha;
    //polyFirstNegative.addPolynomial("a",-2,-2,3,3,3);
    //polyFirstNegative.multiplyPolynomial("a",-2,-2,3,3,3);

    //Test Cases 13-14
    //Polynomial<int> polyZero;
    //polyZero.addPolynomial(0,0,0,0,0,0);
    //polyZero.multiplyPolynomial(0,0,0,0,0,0);


    return 0;
}
