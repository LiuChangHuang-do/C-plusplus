#include<iostream>
void change_ptr(int **p,int &t){
    *p = &t;
}
int main(){
    int a = 10;
    int b = 20;
    int *p = &a;
    std::cout<<"befor pointer "<<*p;
    change_ptr(&p,b);
    std::cout<<"after pointer "<<*p;
    return 0;
}
