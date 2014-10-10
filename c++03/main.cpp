//
//  main.cpp
//  c++03
//
//  Created by user on 14-10-10.
//  Copyright (c) 2014年 user. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>
//#include <math.h>
#define PRICE 30//符号常量
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
//    int num,total;
//    num=10;
//    total=num*PRICE;
//    std::cout << "total="<<total<<endl;
    //强制类型转换
//    float x;
//    int i;
//    x=3.6;
//    i=(int)x;
//    cout<<x<<"     "<<i<<endl;
//    unsigned short a;
//    short int b=-1;
//    a=b;
//    cout<<"a="<<a<<endl;
    
    //控制符
    double a=123.456789012345;
   // cout<<a;
    cout<<setprecision(9)<<a;
    return 0;
}
