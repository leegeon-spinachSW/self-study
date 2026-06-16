//  제어문
// 3-1
// #include<iostream>

// using namespace std;
// void main(void){
//     int x;
//     cout << "input x -> ";
//     cin >> x;

//     if(x < 0)
//     x = -x;
    
//     cout << "result : " << x << endl;

// }

// 3-3

#include<iostream>

using namespace std;

void main(void){
    int score;
    char grade;
    cout  << "input score -> ";
    cin >> score;
    if(score >= 90)
        grade = 'A';
    else if(score >= 80)
        grade = 'B';
    else if(score >= 70)
        grade = 'C';
    else if(score >= 60)
        grade = 'D';
    else
        grade = 'F';
    cout << "result grade : " << grade << endl;
}