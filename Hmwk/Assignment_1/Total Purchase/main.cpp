/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: blueb
 *
 * Created on February 28, 2017, 6:56 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float Item1,Item2,Item3,Item4,Item5,Tax;
    float Item1Tax,Item2Tax,Item3Tax,Item4Tax,Item5Tax;
    float Item1Ttl,Item2Ttl,Item3Ttl,Item4Ttl,Item5Ttl;
    Item1=15.95;
    Item2=24.95;
    Item3=6.95;
    Item4=12.95;
    Item5=3.95;
    Tax=0.07;
    Item1Tax=Item1*Tax;
    Item2Tax=Item2*Tax;
    Item3Tax=Item3*Tax;
    Item4Tax=Item4*Tax;
    Item5Tax=Item5*Tax;
    Item1Ttl=Item1+Item1Tax;
    Item2Ttl=Item2+Item2Tax;
    Item3Ttl=Item3+Item3Tax;
    Item4Ttl=Item4+Item4Tax;
    Item5Ttl=Item5+Item5Tax;
    cout<<Item1<<endl;
    cout<<Item1Tax<<endl;
    cout<<Item1Ttl<<endl;
    cout<<Item2<<endl;
    cout<<Item2Tax<<endl;
    cout<<Item2Ttl<<endl;
    cout<<Item3<<endl;
    cout<<Item3Tax<<endl;
    cout<<Item3Ttl<<endl;
    cout<<Item4<<endl;
    cout<<Item4Tax<<endl;
    cout<<Item4Ttl<<endl;
    cout<<Item5<<endl;
    cout<<Item5Tax<<endl;
    cout<<Item5Ttl<<endl;

    return 0;
}

