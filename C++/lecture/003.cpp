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

// #include<iostream>

// using namespace std;

// void main(void){
//     int score;
//     char grade;
//     cout  << "input score -> ";
//     cin >> score;
//     if(score >= 90)
//         grade = 'A';
//     else if(score >= 80)
//         grade = 'B';
//     else if(score >= 70)
//         grade = 'C';
//     else if(score >= 60)
//         grade = 'D';
//     else
//         grade = 'F';
//     cout << "result grade : " << grade << endl;
// }

// 3-5
// #include<iostream>
// using namespace std;
// void main(void){
//     int score;
//     char grade;
//     cout  << "input score -> ";
//     cin >> score;
//     switch(score/10){
//         case 10:
//         case 9:
//             grade = 'A';
//             break;
//         case 8:
//             grade = 'B';
//             break;
//         case 7:
//             grade = 'C';
//             break;
//         case 6:
//             grade = 'D';
//             break;
//         default:
//             grade = 'F';
//     }
//     cout << "result grade : " << grade << endl;
// }

#include<iostream>
using namespace std;
void main(){
    int total = 0, i;
    for (i = 1; i <= 5; i++){
        cout  << "i = " << i << endl;
        total += i;
        cout << "total = " << total << endl;
    }
    cout << "1~"<< i-1 <<" total = " << total  << endl;
}