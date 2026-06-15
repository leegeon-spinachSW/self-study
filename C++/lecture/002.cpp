//자료형과 연산자

#include <iostream>
using namespace std;

void main(void) {
    int num = 85;

    bool istrue;
    istrue = ! num == 70; // 오류 : int인 num에 대해 부정작동
    cout<<"!num == 70 = " << istrue << endl;

    istrue = !(num == 70); // 정상 : 항등연산자의 결과값(boolean)에 대해 부정작동
    cout<<"!num == 70 = " << istrue << endl;

    istrue = num >= 80 && num < 90; 
    // 관계연산자 먼저 작동 후 논리연산자 작동(우선순위)
    cout<<"num >= 80 && num < 90 = " << istrue << endl;

    num = 60;
    istrue = num >= 80 && num < 90;
    cout <<"num >= 80 && num < 90 = " << istrue << endl;
    
}