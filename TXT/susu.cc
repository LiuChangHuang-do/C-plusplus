#include<iostream>
int main()
{   int a;
    std::cout<<"enter a number";
    std::cin>>a;
    int count = 0;
       for (int i = a; i > 1; i--)
       {
        /* code */
        if (a % i == 0)
        {
            /* code */
            count++;
            
        }
        
       }
       if(count == 2){
        std::cout<<"是素数";
       }
    
    
    return 0;
}