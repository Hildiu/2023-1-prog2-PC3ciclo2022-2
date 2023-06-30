//
// Created by MARIA HILDA BERMEJO RIOS on 11/23/22.
//

#ifndef SEC_204_PC3_H
#define SEC_204_PC3_H

#include <iostream>
#include <vector>

using namespace std;

const double pi=3.1415;


class CFigura
{
protected:
    double radio;
public:
    CFigura(){}
    CFigura(double _radio): radio(_radio){}
    ~CFigura(){}
    double getRadio(){return radio;}
    virtual double area()=0;
    virtual double volumen()=0;
    virtual void imprimir()=0;
};


class CCilindro:public CFigura
{
private:
    double altura;
public:
    CCilindro(){}
    CCilindro(double _radio, double _altura):CFigura(_radio) { altura =_altura;}
    ~CCilindro(){}
    double area() override;
    double volumen() override;
    void imprimir() override;
};

class CCono:public CFigura
{
private:
    double altura;
public:
    CCono() {}
    CCono(double _radio, double _altura):CFigura(_radio) { altura =_altura;}
    ~CCono() {};
    double area() override;
    double volumen() override;
    void imprimir() override;
};

class CEsfera:public CFigura
{
public:
    CEsfera(){}
    CEsfera(double _radio): CFigura(_radio){}
    ~CEsfera(){}
    double area() override;
    double volumen() override;
    void imprimir() override;
};

class CToro:public CFigura
{
private:
    double r2;
public:
    CToro(){}
    CToro(double _radio, double _r2):CFigura(_radio){r2=_r2;}
    ~CToro(){}
    double area() override;
    double volumen() override;
    void imprimir() override;
};

class CVector
{ private:
    vector<CFigura*> v;
public:
    CVector(){};
    void agregar(CFigura *obj);
    friend ostream &operator<<(ostream &o, CVector& vector );
};

#endif //SEC_204_PC3_H
