#include <iostream>
using namespace std;

  int v1 = 100;
     static short v2 = 200;
         namespace trei
{
    int v3 = 300;
}

int main(){
	     int v4 = 400;
	       double v5 = 500.5;
	         static int v6 = 600;

	cout<<"Adresa variabilei globale v1 este:  "<<&v1<<endl;
	cout<<"Adresa variabilei globale statice v2 este:  "<<&v2<<endl;
	cout<<"Adresa variabilei  v3 din namespace-ul trei este:  "<<&trei::v3<<endl;
	cout<<"Adresa variabilei locale v4 este:   "<<&v4<<endl;
	cout<<"Adresa variabilei locale v5 este:   "<<&v5<<endl;
	cout<<"Adresa variabilei locale statice v6 este:   "<<&v6<<endl;




    return 0;

}
