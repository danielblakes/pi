/* 
 * File:   main.cpp
 * Author: bd13b
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
	cout<<"How many shots?"<<endl;
	cin >>n;
	if (n>nmax){n=nmax;}
	double pi = calculate_pi(n);
    cout << "Pi = " << pi << endl;
    return 0;
}
