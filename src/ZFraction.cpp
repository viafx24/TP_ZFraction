
#include "ZFraction.h"
#include <iostream>

using namespace std;

ZFraction::ZFraction(): m_numerateur(0),m_denominateur(0)
{

}

ZFraction::ZFraction(int numerateur, int denominateur):m_numerateur(numerateur),m_denominateur(denominateur)
{

}

void ZFraction::afficher() const
{
    cout << m_numerateur << "/" << m_denominateur <<endl;

}
int pgcd(int a, int b)
{
    while (b != 0)
    {
        const int t = b;
        b = a%b;
        a=t;
    }
    return a;
}