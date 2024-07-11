#include <iostream>
using namespace std;
int main(){
int i = 1; 
while (i<6)
{
    if(i==3){
        continue;
    }
    cout<<i;

    i++;
}

return 0;
}