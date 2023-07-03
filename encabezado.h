#include <iostream>
#include <limits>

using namespace std;

void tamanosVariables(){
    cout<<"Tamano INT:"<<sizeof(int)<<endl;
    cout<<"Tamano CHAR:"<<sizeof(char)<<endl;
    cout<<"Tamano LONG:"<<sizeof(long)<<endl;
    cout<<"Maximo INT:"<<numeric_limits<int>::max()<<endl;
    cout<<"Maximo CHAR:"<<numeric_limits<char>::max()<<endl;
    cout<<"Maximo LONG:"<<numeric_limits<long>::max()<<endl;
}
