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
 *
 */
class CMyString{
    public:
        CMyString(char* pData = NULL);
        CMyString(const CMyString& str);
        ~CMyString(void);

    private:
        char* m_pData;

    public:
        /***/
        CMyString& CMyString::operator =(const CMyString &str){
            if(this == $str)
                return *this;

            delete []m_pData;
            m_pData = NULL;
            m_pData = new char[strlen(str.m_pData)+1];
            strcpy(m_pData,str.m_pData)

            return *this
        }
        /*****/
        CMyString& CMyString::operator = (const CMyString &str){
            if(this != &str){
                CMyString strTemp(str);

                char * pTemp = strTemp.m_pData;
                strTemp.m_pData = m_pData;
                m_pData = pTemp;
            }

            return *this;
        }



};


int main()
{
    // vector<int> v = vector<int>{1,2,3,4,5};

    CMyString so ;



    return 0;
}
