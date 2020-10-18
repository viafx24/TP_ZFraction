#ifndef DEF_FRACTION
#define DEF_FRACTION

#include <iostream>

class ZFraction
{
public:

ZFraction();
ZFraction(int numerateur, int denominateur=1);
//~ZFraction();

void afficher() const;

private:

    int m_numerateur;      //Le numérateur de la fraction
    int m_denominateur;    //Le dénominateur de la fraction


};

int pgcd(int a, int b);

#endif