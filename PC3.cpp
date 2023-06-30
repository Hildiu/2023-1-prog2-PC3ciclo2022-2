//
// Created by MARIA HILDA BERMEJO RIOS on 11/23/22.
//

#include "PC3.h"


double CCilindro::area()
{
  return 2*pi*radio*altura + 2*pi*radio*radio;
}

double CCilindro::volumen()
{
  return pi*radio*radio*altura;
}

void CCilindro::imprimir()
{
  cout << "Cilindro\n";
  cout << "Radio : "<<radio << ", " << "altura : " << altura << "\n";
  cout << "Volumen : " << volumen() << "\n";
  cout << "Area    : " << area()<<"\n";
}

//----------------------------------

double CCono::area()
{
  return pi*radio*sqrt( radio*radio + altura*altura) + pi*radio*radio;
}

double CCono::volumen()
{
  return  pi/3.0*radio*radio*altura;
}

void CCono::imprimir()
{
  cout << "Cono\n";
  cout << "Radio : "<<radio << ", " << "altura : " << altura << "\n";
  cout << "Volumen : " << volumen()<< "\n";
  cout << "Area    : " << area()<< "\n";
}

//------------------------------
double CEsfera::area()
{
  return 4*pi*pow(radio,2);
}

double CEsfera::volumen()
{
  return 4.0*pi/3.0 * pow(radio,3);
}

void CEsfera::imprimir()
{
  cout << "Esfera\n";
  cout << "Radio : "<<radio << "\n";
  cout << "Volumen : " << volumen()<< "\n";
  cout << "Area    : " << area()<< "\n";
}

//-------------------------------------

double CToro::area()
{
  return 4*pi*pi*radio*r2;
}

double CToro::volumen()
{
  return 2*pi*radio*radio*r2;
}

void CToro::imprimir()
{
  cout << "Toro\n";
  cout << "Radio : "<<radio << "\n";
  cout << "Radio 2 "<<r2 << "\n";
  cout << "Volumen : " << volumen()<< "\n";
  cout << "Area    : " << area()<< "\n";
}


//----------------------------
void CVector::agregar(CFigura *obj)
{
  v.push_back(obj);
}

ostream &operator<<(ostream &o, CVector& vector )
{
  for(int i = 0; i<vector.v.size(); i++) {
    o << "\nFigura # " << i + 1 << ":\n";
    vector.v[i]->imprimir();
    o << "---------------------------\n";
  }
}