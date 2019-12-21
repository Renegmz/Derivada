/* 
 * File:   main.cpp
 * Author: renegomez
 *
 * Created on 15 de diciembre de 2019, 03:02 PM
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double h, metodo1,error1, metodo2, error2;
    
    /*Valor base para el calculo del error(absoluto)
    x == 1*/
    double val_base = (1.0)*exp(-pow(1.0,2.0));
     
    
    cout << fixed << setprecision(12) << endl;
    for(int j = 0; j < 65; j++)
    {
       h = 1.0/(pow(2.0,j));
       
       /* (f(x0 + h) - f(x0)) / h*/
       metodo1 = ( ((1.0 + h)*exp(-pow(1.0 + h,2.0))) - ((1.0)*exp(-pow(1.0,2.0))) ) / (h);
       error1 = abs(val_base - metodo1); //Error absoluto: |p - p*|
       
       /* (f(x0 + h) - f(x0 - h)) / 2h*/
       metodo2 = ( ((1.0 + h)*exp(-pow(1.0 + h,2.0))) - ((1.0 - h)*exp(-pow(1.0 - h,2.0))) ) / (2*h);
       error2 = abs(val_base - metodo2); //Error absoluto: |p - p*|
       
       cout << h << " " << metodo1 << " " << error1 << " " << metodo2 << " " << error2 << endl; 
    }
    return 0;
}

