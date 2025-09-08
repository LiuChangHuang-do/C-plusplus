#include<cstring>
#include<iostream>
class Stringbad
{
private:
    /* data */
    int len;
    static int object_num;
    char *str;
public:
    Stringbad(/* args */){

    }
    Stringbad(const char *s){
        len = std::strlen(s);
        str = new char[len + 1];
        object_num++;
        std::strcpy(str,s);

    }
    ~Stringbad(){
        object_num--;
        delete [] str;
    }
};
