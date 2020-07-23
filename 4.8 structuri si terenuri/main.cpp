#include <iostream>

using namespace std;

   enum TipTeren {intravilan=100, extravilan, campie, livada};   // incep enum-ul de la 100...

   struct Suprafata {
     float _lung;
     float _lat;
};

   struct Teren {
     long long _cnpProprietar;
     TipTeren  _tipTeren;
     Suprafata _suprafata;
     float _arie;
};
int main(){
     Teren unTeren;                  // declar obiectul unTeren pe Stack
      unTeren._suprafata._lung = 111.33;
      unTeren._suprafata._lat = 33.11;
      unTeren._cnpProprietar = 1830226353333;
      unTeren._tipTeren = extravilan;
      unTeren._arie =(unTeren._suprafata._lung * unTeren._suprafata._lat);

     Teren *oMovila = new Teren;          // pointerului oMovila ii voi atribui valorile lui unTeren
      (*oMovila)._suprafata._lung = unTeren._suprafata._lung;       // pointerul scris in "alta varianta"...
      oMovila->_suprafata._lat =unTeren._suprafata._lat;
      oMovila->_cnpProprietar = unTeren._cnpProprietar;
      oMovila->_tipTeren = unTeren._tipTeren;
      oMovila->_arie = unTeren._arie;

      cout << "Suprafata: " <<oMovila->_arie << " metri patrati"<<endl;       // afisez membrii pointerului oMovila
      cout<<"Lungimea:  "<<oMovila->_suprafata._lung<<" metri liniari"<<endl;
      cout<<"Latimea:   "<<oMovila->_suprafata._lat<<" metri liniari"<<endl;
      cout  <<"CNP-ul Proprietar: "<<oMovila->_cnpProprietar << endl;

      cout << "Tipul terenului este:";
         switch (oMovila->_tipTeren) {                    //selectez prin pointer ce tip de teren este...
      case 100: cout << " intravilan "<<endl; break;
      case 101: cout << " extravilan  "<<endl; break;
      case 102: cout << " campie "<<endl;  break;
      case 103: cout << " livada  "<<endl;  break;
    }
       delete oMovila;
       oMovila = nullptr;

    return 0;
}
