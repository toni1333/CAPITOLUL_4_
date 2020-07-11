#include <iostream>

    typedef unsigned short us;

using namespace std;

    us *arraySuma =new us[41];

int main(){

    us arrayStack[41];
     us *arrayHeap =new us[41];

    for(us i=0; i<= 40; ++i){
        arrayStack[i] = i*7;
          arrayHeap[i] = i*8;
            arraySuma[i] = arrayStack[i] + arrayHeap[i];
    cout << "Stack: "<<" "<< arrayStack[i]<<" "<<"Heap: "<<" "<<arrayHeap[i]<<" "<<"Suma= "<<arraySuma[i]<<endl;
                                }

                delete arrayHeap;
                arrayHeap = nullptr;



    return 0;
}
