#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
    int a=10;
    for(int i=0;i<=100;i++){
        int x=a+a;
        cout<< x<<"\n";
    }
}