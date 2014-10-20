//
//  main.cpp
//  L1HelloC++
//
//  Created by Alex on 14-10-15.
//  Copyright (c) 2014年 alex. All rights reserved.
//

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
//class People{
//public:
//    void sayHello(){
//        printf("hello C++ \n");
//    }
//};

int getMax(int x,int y)
{
    return x >y?x:y;
}

int getMin(int x,int y)
{
    return x > y?y:x;
}

int main(int argc, const char * argv[])
{

//    1.3
//    insert code here...
//    People *p = new People();
//    p->sayHello();
//    free(p);
//    delete(p);

//    1.4
//    int v1 = 0,v2=0;
//    cout << "enter two number"<<endl;
//    cin >> v1 >> v2;
//    cout << v1 << " * " << v2 << " = " << v1*v2 << endl;

    //1.9
//    int n = 50;
//    int sum =0;
//    while (n <=100) {
//        sum += n;
//        n++;
//    }
//    cout << "the sum from 50 to 100 is " << sum << endl;
    //1.10
//    int n = 10;
//    while (n>1) {
//        cout << --n << "\n"<< endl;
//    }
    //1.11
    int v1 = 0, v2 = 0,i = 0;
    cout << "enter the max and min number " << endl;
    cin >> v1 >> v2;
    cout << "the integer from " << getMax(v1, v2) << " to " << getMin(v1, v2) << endl;
    i = getMax(v1, v2);
    while (i > getMin(v1, v2) +1) {
        i--;
        cout << i <<endl;
    }
    return 0;
}

