#include <iostream>

using namespace std;

struct Date {
  char prenume[20];
  char strada[20];
  char oras[20];
  char judet[20];
  unsigned int numar;
  unsigned int codPostal;
};

   void Fcitire(Date  &date){     //pasare prin referinta pt a memora variabilele dupa iesirea din functie
        for(int i=0; i<6; ++i){
           switch(i){
        case 0: cout <<"Introduce-ti prenumele: "; cin >> date.prenume;
        case 1: cout <<"Introduce-ti strada: "; cin >> date.strada;
        case 2: cout <<"Introduce-ti orasul: "; cin >> date.oras;
        case 3: cout <<"Introduce-ti judetul:"; cin >> date.judet;
        case 4: cout <<"Introduce-ti numarul strazii: "; cin >> date.numar;
        case 5: cout<<"Introduce-ti codul postal: "; cin>>date.codPostal;}    break;  // cu break opresc for-ul...
}
}
         void Fafisare(Date date){
           cout<<"------------------------------"<<endl;   // o delimitare..
           cout<<"Ma numesc: "<<date.prenume<<endl;
           cout<<"M-am nascut in judetul: "<<date.judet<<endl;
           cout<<"In orasul: "<<date.oras<<endl;
           cout<<"Pe strada: "<<date.strada<<endl;
           cout<<"La numarul: "<<date.numar<<endl;
           cout<<"cod Postal: "<<date.codPostal<<endl;
   }


int main()
{
        Date date;
        Fcitire(date);
        Fafisare(date);


    return 0;
}
