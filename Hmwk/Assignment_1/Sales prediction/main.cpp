/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: blueb
 *
 * Created on February 28, 2017, 5:19 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float Ttl, Per, AmtMd;
    Ttl=8,600,000;
    Per=0.58;
    AmtMd=Ttl*Per;
    
    cout<<AmtMd;

    return 0;
}

