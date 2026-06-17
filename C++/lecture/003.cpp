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

// 3-7 반복문에서 초기화에 관계에 대해 문제풀이 진행함
// #include<iostream>
// using namespace std;
// void main(){
//     int total = 0, i;
//     for (i = 1; i <= 5; i++){
//         cout  << "i = " << i << endl;
//         total += i;
//         cout << "total = " << total << endl;
//     }
//     cout << "1~"<< i-1 <<" total = " << total  << endl;
// }

// // 3-9 반복문을 이용해서 기본적인 구구단 출력하기 문제 풀이
// #include<iostream>
// using namespace std;
// void main(){
//     int dan;
//     cout << "input dan -> ";
//     cin >> dan;
//     for(int j = 1; j<10; j++)
//     cout << dan << " * " << j << " = " << dan*j << endl;

// }
// // 포문 초기화 식 변수 j가 곱해지는 수의 역활을 하였다. 
// // 이처럼 포문의 초기화 변수가 어떤 역할을 하느냐에 따라 포문이 어떻게 동작하는지 달라질 수 있다.

// 3-10 다중 for문을 이용해서 특정 구구단 출력하기
// #include<iostream>
// using namespace std;
// void main(){
//     for(int dan = 2; dan < 10; dan++){
//         for(int j = 1; j < 10; j++){
//             cout << dan << " * " << j << " = " << dan * j << endl;
//         }
//         cout << endl << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// void main(){
//     int num;
//     do{
//         cout << "input num(press num 0 to stop process) : ";
//         cin >> num;
//         cout << "result : " << num << endl;
//     }while(num != 0);
//     cout << num << "your enter key is 0, process stop" << endl;
// }