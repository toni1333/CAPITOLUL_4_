#include <iostream>
using namespace std;

  double *pG= new double(1.3);


int main()
{
       double* pL1= new double;
           *pL1=2.3;    //aici am initializat si in alta varianta...

       double* pL2= new double(5.4);

           double* pntMedie= new double;

                *pntMedie = ((*pG + *pL1 + *pL2) / 3);

        cout<<"Continutul celui de al-4-lea bloc de memorie este: "<<*pntMedie<<endl;

        delete pL1;
         delete pL2;
          delete pntMedie;


    return 0;
}
