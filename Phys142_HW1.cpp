#define _USE_MATH_DEFINES
#include <cmath>
#include <complex>
#include <vector>
#include <iostream>


using namespace std;

const int D = 600;

typedef complex<double> cdouble;

const cdouble I(0,1);

const double mass = 1.0;
const double omega = 1.0;
const double alpha = 2.0;
const double xstart = .75;
const double x0 = -4.0;
const double xD = 4.0;
const double deltaX = (xD - x0)/D;

int main() {
	//Init discrete psi vector
	vector<cdouble> psiDisc;
	cdouble tempPsiVal;
	double x;
	for(int i=0; i<D; i++) {
		x = x0 + i*deltaX;
		tempPsiVal = pow((alpha/M_PI),.25)*exp((alpha*-1/2)*pow((x-xstart),2.0));
		//cout << tempPsiVal << endl;
		psiDisc.push_back(tempPsiVal * conj(tempPsiVal));
	}
	double i = 0;
	//cout << "Before print loop" << endl;
	for(cdouble val : psiDisc) {
		//cout << "in print loop" << endl;
		x = x0 + i*deltaX;
		i++;
		cout << x << "	" << real(val) << endl;
	}
	//cout << "post print loop" << endl;
}

