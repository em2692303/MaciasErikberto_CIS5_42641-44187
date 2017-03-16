/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: blueb
 *
 * Created on February 28, 2017, 4:33 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    double Ppl;
    double PctPurc;
    double Citpct;
    double PurcEn;
    double PurcCit;
    Ppl=16500;
    PctPurc=0.15;
    Citpct=0.58;
    PurcEn=Ppl*PctPurc;
    PurcCit=PurcEn*Citpct;
    
    cout<<"Purchase energy drinks: "<<PurcEn<<endl;
    cout<<"Prefer Citrus Flavor: "<<PurcCit;
    
    
    return 0;
}

