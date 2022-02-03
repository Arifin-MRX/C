#include <iostream>
using namespace std;

int main ()
{
    char grade[100]={};

    grade[90] = 'A';
    grade[80] = 'B';
    grade[70] = 'C';
    cout<<"\tGrade Nilai"<<endl;
    cout<<"90 : "<<grade[90]<<endl;
    cout<<"80 : "<<grade[80]<<endl;
    cout<<"70 : "<<grade[70]<<endl;

    return 0;
}