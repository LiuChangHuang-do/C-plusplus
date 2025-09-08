#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
switch (x) {
    case 1: cout << "A";
    case 2: cout << "B";  // 匹配，无break
    case 3: cout << "C";  // 穿透执行
    case 4: cout << "D";  // 穿透执行
    default: cout << "E"; // 穿透执行
    
}
// 输出：BCDE
    return 0;
}