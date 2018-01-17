#include<iostream>
#include<vector>
#include<string>
#include<stdint.h>
#include<climits>
#include<algorithm>
#include<unordered_map>

//g++ -g -std=c++11 100.\ Same\ Tree.cpp -o demo
//gdb ./demo
using namespace std;
/**
 * IN the book : check exist instance ==> add lock ==> add check instance ==> use state
 * 
 * there is copy : https://stackoverflow.com/questions/1008019/c-singleton-design-pattern
 */

class S {
public:
    static S& getInstance(){
        static S instance; // Guaranteed to be destroyed.
        return instance;
    }

private:
    S(){} // Constructor ? (the {} brackets) are needed here.

public:
    S(S const&) = delete;
    void operate = (S const&) = delete;

}   



int main()
{
    // vector<int> v = vector<int>{1,2,3,4,5};


    Singleton* Singleton::Instance;

    return 0;
}

