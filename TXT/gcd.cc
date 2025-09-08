#include<iostream>
#include<vector>
int main()
{   std::vector<int>v1,v2;
    int a = 12,b = 10;
    for (int i = a; i > 0; i--)
    {
       if (a % i == 0)
       {
        v1.push_back(i);
       }
    }
    for (int j = b; j > 0; j--)
    {
        if (b % j == 0)
        {
            v2.push_back(j);
        } 
    }
    for (const auto & num1 : v1)
    {
        for (const auto & num2 :v2)
        {
            if (num1 == num2 )
            {
                std::cout<<"找到"<<num1;
            }
            
        }
        
    }
    
    
    return 0;
}
