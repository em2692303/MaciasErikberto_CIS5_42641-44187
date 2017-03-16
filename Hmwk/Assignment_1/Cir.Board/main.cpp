/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: blueb
 *
 * Created on February 28, 2017, 9:14 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    double CrtBrd, Pct, Pft, SaPr;
    CrtBrd=14.95;
    Pct=0.35;
    Pft=CrtBrd*Pct;
    SaPr=Pft+CrtBrd;
    
    cout<<"Their circuit boards are sold for $"<<SaPr;

    return 0;
}

