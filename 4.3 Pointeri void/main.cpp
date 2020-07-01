#include <iostream>
using namespace std;

int main()
{
    int v1;
      void* pnt=&v1;

    *(static_cast<int*>(pnt))=2020;

    cout<<v1<<endl;
      cout<<*(static_cast<int*>(pnt))<<endl;


    return 0;
}
