#include<iostream>
int main()
{   int arry[] = {1,2,3,4};
    auto a = *arry;
    std::cout<<"the numbers of arry is "<<sizeof(arry)/sizeof(arry[0])<<std::endl;
    std::cout<<"首元素的值"<<a<<std::endl;
    auto count = sizeof(arry)/sizeof(arry[0]);
    for (size_t i = 0; i < count; i++)
    {
        std::cout<<"the element of arry is "<<arry[i]<<std::endl;
    }
    auto *p = arry;
    for (size_t i = 0; i < count; i++)
    {
        std::cout<<"数组元素 "<<*p<<std::endl;
        p++;
    }
    for (auto a : arry)
    {
       std::cout<<"a value is "<<a<<std::endl;
    }
    
    
    
    return 0;
}
