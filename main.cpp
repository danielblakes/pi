/* 
 calculate pi

    Copyright (C) bd13b, 2016 fvalle1 https://github.com/fvalle1

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details. 
*/

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <time.h>
using namespace std;

/*
 * Calculating pi using the Monte Carlo method.
 */
double hypotenuse(double x, double y){
    return sqrt(x * x + y * y);
}
double calculate_pi(int iterations) {
	srand(time(0));
	double ac = 0.0;
    for (int i=0;i < iterations; i++){
        double x = ((double)rand()/(double)RAND_MAX);
        double y = ((double)rand()/(double)RAND_MAX);
        double d = hypotenuse(x,y);
		if(d < 1.0){
            ac += 1.0;
        }
    }
    return 4. * ac / iterations;
}

int main(int argc, char** argv) {
    int n, nmax;
	nmax=10000000;
	if(argc>1) n=atoi(*(argv+1));
	  else{
	    cout<<"How many shots?"<<endl;
	    cin >>n;
	  }
	if (n>nmax){n=nmax;}
	double pi = calculate_pi(n);
    cout << "Pi = " << pi << endl;
    return 0;
}
