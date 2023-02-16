#include <iostream>
using namespace std;

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){
    using namespace second;
    cout<<x<<endl;

    int x = 0;
    cout<<x<<endl;

    cout<<first::x<<endl;

    return 0;
}