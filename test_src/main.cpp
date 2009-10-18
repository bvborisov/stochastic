// =============================================================

/* 'stochastic' is a library
 * for performing operations between random variables
 *
 * main() is used for test purposes
 *
 *
 *      Author: Dimitrios Milios
 */

// =============================================================


// load "stochastic" library
#include "../src/stochastic.h"

#include "Experiments.h"
#include "Gnuplot.h"
#include <cstdio>
#include <iostream>
#include <cmath>
#include <vector>

int printArguments(int argc, char *argv[])
{
	int i;
	std::cout << "\nThe arguments were:\n";
	for (i = 0; i < argc; i++)
		std::cout << argv[i]<< "\n" ;
	return 0;
}

int main(int argc, char *argv[])
{
	RandomVariable r1 = new Gaussian;
	RandomVariable r2 = new Gaussian;

	RandomVariable r3 = r1 + r2;
	r3 = r1 + r1;

	return printArguments(argc, argv);
}
