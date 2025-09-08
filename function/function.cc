#include<iostream>
void fillarry(int *arr , int size)
{   int fill_;
    std::cout<<"创建变量，从键盘中读取值，填入数组"<<std::endl;
    std::cin>>fill_;
    for (size_t i = 0; i < size; i++)
    {
       if (!std::cin)
       {
        /* code */
        std::cin.clear();
        while (std::cin.get() != '\n')
        {
            /* code */
            continue;
        }
        std::cout<<"bad input"<<std::endl;
        break;
        }
        else if (fill_ < 0)
        {
            /* code */
            break;
        }
        arr[i] = fill_;   

    }
    
}
int main()
{   int arr[10];
    auto size = sizeof(arr)/sizeof(arr[0]);
    fillarry(arr,size);
    return 0;
}
