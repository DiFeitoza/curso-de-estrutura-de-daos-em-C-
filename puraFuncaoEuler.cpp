#include <iostream>

using namespace std;

double fatorial(int n){
    double f = 1;
    for(int i = 1; i<=n; i++){
        f*=i;
    }
    return f;
}

int main(){

    int x = 0;
    cin>>x;
    cout<<fatorial(x);


    return 0;
}
