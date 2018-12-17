// vector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

//class B
//{
//public:
//    B();
//    ~B();
//private:
//    
//};
//
//B::B()
//{
//    cout << "B的构造" << endl;
//}
//
//B::~B()
//{
//    cout << "B的析构" << endl;
//}
//
//class A
//{
//public:
//    A();
//    ~A();
//    void Display()
//    {
//        cout << i;
//        cout << "A的DDisplay" << endl;
//    }
//    A(int i)
//    {
//        this->i = i;
//        cout << "A的int参数构造" << endl;
//    }
//    A(const A& a)
//    {
//        cout << "A的复制构造函数" << endl;
//    }
//    int i;
//    A(A&& a)
//    {
//        cout << "A的移动构造" << endl;
//    }
//    A& operator=(A& a)
//    {
//        cout << "A的赋值运算符";
//        return *this;
//    }
//
//private:
//
//};
//
//A::A()
//{
//    i = 0;
//    cout << "A的构造" << endl;
//}
//
//A::~A()
//{
//    cout << "A的析构" << endl;
//}
//
//int * p = new int(100);
//A func()
//{
//    return A(*p);
//}

void Test()
{
#pragma region vector<bool>
    //vector<bool> t1;
    //t1.push_back(true);
    //t1.push_back(false);

    //bool* p = &(t1[1]);

    //cout << p;
#pragma endregion vector<bool>

#pragma region vector存放class
    //vector<A> ta;
    //cout << ta.max_size()/1024/1024;
    //auto Aa = A(1);
    //auto Ab = A(2);
    //ta.push_back(Aa); //普通push_back，调用复制构造函数
    //ta.push_back(Ab);
    //auto it = ta.begin();
    ////ta.push_back(1); //移动语义
    ////ta.push_back(A());
    //ta.erase(it);
    //it->Display();
    //ta.reserve();
    //ta.clear();
    //ta[0].Display();

    //if (&ta[0] == &Aa)
    //{
    //    cout << "我还是Aa" << endl;
    //}
#pragma endregion vector构造1

#pragma region 存放vector
    //vector<vector<A>> t3;
    //vector<A> At;
    //At.push_back(A());
    //t3.push_back(At);
    //At[0].i += 1;
    //At.push_back(A());
    //cout << At[0].i;
    //cout << t3[0][0].i; //已经是新对象了，
    //cout << t3.size();
#pragma endregion vector构造3
}

//int main()
//{
//
//    vector<int> ta;
//    //for (int i = 0; i < 10; ++i)
//    //{
//    //    ta.push_back(i);
//    //}
//
//    auto it = ta.back();
//
//    //it += 5;
//    //cout << "容量是  " << ta.capacity() << endl;
//    //cout << "it的值是  " << *it << endl;
//
//    //ta.erase(it);
//    //cout << "erase后容量是    " << ta.capacity() << endl;
//    //cout << "此时it指向的值是    " << *it << endl;
//
//    return 0;
//}

// iterator_debugging_5.cpp
// compile by using: /EHsc /MDd
#include <vector>


int main()
{
    auto vect = std::vector<int>(10);
    auto sink = new auto(std::begin(vect));
    ::operator delete(sink); // frees the memory without calling ~iterator()
} // access violation
