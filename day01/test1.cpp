#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name1,name2,resultAll;
    cout << "put in the first name:";
    getline(cin, name1);
    cout << "put in the second name:";
    getline(cin, name2);
    //resultAll = name1+name2;
    cout<<"恭喜" << name1 << " and " << name2 << "喜结良缘" << endl;
    system("pause");
    return 0;
}