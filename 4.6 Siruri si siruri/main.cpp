#include <iostream>

typedef char cc;
typedef unsigned short us;   // am folosit typedef ul..

using namespace std;

int main(){
      cc sirStack[]={"Scris in sirulStack si afisat din sirulHeap"};
      cc *sirHeap=new cc [sizeof(sirStack)];
      us c=1;    // contorul 1
      us c2=0;  //  contorul 2

      for(us i=0; i < 44; ++i){   // in loc de sizeof am numarat elementele sirului (varianta 2)
            sirHeap[i] = sirStack[i];
}
      cout <<sirHeap<<endl;

      for(us i=0; i < sizeof(sirStack); i++){
            if(sirStack[i]==' '){
                        c++;}
            if(sirStack[i]==' '){  // am folosit si contorul 2 suplimentar..
                c2++;}
}
      cout<<"Textul din sir are: "<<c<<" cuvinte"<<endl;
      cout<<"Are: "<<((sizeof(sirStack))-c2)-1<<" litere"<<endl; // -1 pentru '\0' de la finalul sirului..
      cout<<"Si spatii introduse: "<<c2;

      delete[] sirHeap;
      sirHeap = nullptr;

    return 0;
}
