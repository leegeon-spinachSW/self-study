//  제어문
// 3-1
#include<iostream>

using namespace std;
void main(void){
    int x;
    cout << "input x -> ";
    cin >> x;

    if(x < 0)
    x = -x;
    
    cout << "result : " << x << endl;

}
