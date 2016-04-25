//
//  threeInput.cpp
//  Week 1
//
//  Created by Eli Sobylak on 30/1/15.
//  Copyright (c) 2015 Eli Sobylak. All rights reserved.
//

#include <iostream>
#include 'IntCell.h'
using namespace std;

int main() {
    IntCell one
    IntCell two
    IntCell three
    int x,y,z, min, max;
    float sum, avg;
    
    cout << "Enter First number ";
    cin >> x;
    one.write(x);
    
    cout << "Enter Second number ";
    cin >> y;
    two.write(y);
    
    cout << "Enter Third number " ;
    cin >> z;
    three.write(z);
    
    cout << "Forward: " << one.read() << "," << two.read() << "," << three.read() << "\n";

    cout << "Barckward: " << three.read() << "," << two.read() << "," << one.read() << "\n";  

    IntCell sumx;

    sum = x;
    avg = x;

    if ( x < y )
    {
        min = x;
        max = y;
    }
    else
    {
        min = y;
        max = x;
    }

    if ( z < min )
       min = z;
    else if ( z > max )
       max = z;

    cout << "Max is " << max << " and the min is " << min << "\n";

    sum = x + y + z;
    avg = sum / 3;
    cout << "Avg is " << avg << "\n";
    return 0;
}