#include<iostream>
struct Student
{   
    std::string name;
    int age;
};
int main()
{
    Student s1 = {"juli",20};
    std::cout<<s1.age<<std::endl;
    std::cout<<s1.name<<std::endl;
    s1.age = 90;
    s1.name = "bolo";
    std::cout<<s1.age<<std::endl;
    std::cout<<s1.name<<std::endl;
    struct Person
    {
      int num;
    };
    
    return 0;
}
