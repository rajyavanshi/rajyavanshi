#include <iostream>
using namespace std;
void stringname(string s)
{
    cout << "Geeksforgeeks";
    return;
}
int main()
{
    string l;
    stringname(l);
    char *p = &l[0];
    while (*p != '\0')
    {
        cout << *p;
        p++;
    }
    cout << endl;
    return 0;
}