#include <iostream>

using namespace std;

    enum Tip {caise= 1, ananas, banane, mango, lamai};

    struct Produs {
     Tip tipProdus;
     float cantitate;
     float pret;
};
int main(){
     Produs tbl[3];
     short temporar;
     long double total=0;     // long in caz ca se introduc numere mari...

    for(int i=0; i<3; ++i){
     cout << "Introduce-ti tipul fructului (1-caise, 2-ananas, 3-banane, 4-mango, 5-lamai):"<<endl;
     cin>>temporar;
         tbl[i].tipProdus=static_cast<Tip>(temporar);
     cout << "Introduce-ti cantitatea: "<<endl;
     cin >> tbl[i].cantitate;
     cout << "Introduce-ti pret: "<<endl;
     cin >> tbl[i].pret;
     cout<<endl;    // end-linurile pentru vizibilitate
     }
         cout<<endl;
     cout<<"Produs: "<<"  "<<"Cantitate: "<<"  "<<"Pret: "<<endl;

    for(int i=0; i<3; ++i){
      switch (tbl[i].tipProdus){
     case 1: cout<<"Caise  "; break;
     case 2: cout<<"Ananas "; break;
     case 3: cout<<"Banane "; break;
     case 4: cout<<"Mango  "; break;
     case 5: cout<<"Lamai  "; break;
}
      cout<<"        "<<tbl[i].cantitate<<"         "<<tbl[i].pret<<endl;
     total+=(tbl[i].cantitate*tbl[i].pret);
     } cout<<endl;    // inca un end...
      cout<<"Valoare stoc:  "<<total;

    return 0;
}
