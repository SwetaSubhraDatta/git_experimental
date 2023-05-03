#include <iostream>

using namespace std;

/*
    Undertsanding cerr,clog and cout
*/

void understanding_cerr_clog_cout()
{
    int a=10,b=0,c;
    if(b==0)
    {
        cerr << "This is error:Divide by zero error" << endl;
        b=20;
    }
    c=a/b;
    cout << "This is cout:Value of c is " << c << endl;
    clog << "This is clog:Value of c is " << c << endl;
}

int main()
{
    understanding_cerr_clog_cout();
    return 0;
}
