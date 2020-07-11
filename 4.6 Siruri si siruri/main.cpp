#include <iostream>

    typedef char cc;
     typedef unsigned short us;

using namespace std;

int main(){
      cc sirStack[]={"Scris in sirulStack si afisat din sirulHeap"};
       cc *sirHeap=new cc [sizeof(sirStack)];
        us c=1;

    for(us i=0; i < sizeof(sirStack); ++i){
                sirHeap[i] = sirStack[i];
    }
           cout <<sirHeap<<endl<<endl;

    for(us i=0; i < sizeof(sirStack); i++){
            if(sirStack[i]==' '){
                        c++;}
             }
           cout<<"Textul din sir are: "<<c<<" cuvinte"<<endl;

             delete[] sirHeap;
             sirHeap = nullptr;
    return 0;
}
