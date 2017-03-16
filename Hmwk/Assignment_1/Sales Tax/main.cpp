/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: blueb
 *
 * Created on February 28, 2017, 6:42 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float DllrAmt, StTax, CntTax, AmtSt, AmtCnt, TtlTax;
    DllrAmt=95;
    StTax=0.04;
    CntTax=0.02;
    AmtSt=DllrAmt*StTax;
    AmtCnt=DllrAmt*CntTax;    
    TtlTax=AmtSt+AmtCnt;
    cout<<TtlTax;
    return 0;
}

