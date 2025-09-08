#include<iostream>
enum Name{bob = 2,lisi = 2,aliy,tony};
enum class Color{RED,GERRN,YELLOW};
enum class Trafficlight{RED,GERRN,YELLOW};
int main()
{   Name n1 = bob;
    Name n2 = lisi;
    int a = Name::bob;
    int b = static_cast<int>(Color::GERRN);
    std::cout<<n1<<std::endl;
    std::cout<<n2<<std::endl;
    Color c1 = Color::YELLOW;
    Trafficlight t1 = Trafficlight::YELLOW;


    return 0;
}
