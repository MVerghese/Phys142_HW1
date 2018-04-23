#define _USE_MATH_DEFINES
#include <cmath>
#include <complex>
#include <vector>
#include <iostream>


using namespace std;

const int D = 600;

typedef complex<double> cdouble;

const cdouble I(0.0,1.0);

const double mass = 1.0;
const double omega = 1.0;
const double alpha = 2.0;
const double hbar = 6.582119 * pow(10,-16); 
const double xstart = .75;
const double x0 = -4.0;
const double xD = 4.0;
const double deltaX = (xD - x0)/D;
const double T = 2.0 * M_PI;
const double deltaT = T/128.0;

vector<cdouble> vecMatMul(vector<cdouble> v, vector<cdouble> m);
void printCVec(vector<cdouble> v);

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
	
	double A = pow((2*M_PI*hbar*I*deltaT/mass),.5)
	vector<cdouble> transitionMatrix;
	int xi;
	int xj;
	for(int i=0; i<D; i++) {
		for(int j=0; j<D; j++) {
			xi = x0 + i*deltaX;
			xj = x0 + j*deltaX;
			transitionMatrix.pushBack((1/A)*exp((I*deltaT/hbar)*((.5*mass*pow(xj-xi,2)/pow(deltaT,2))-(mass*pow(omega,2)*pow((xj+xi)/2,2)))));
		}
	}
	psi = psiDisc;
	for(int i=0; i<32; i++) {
		psi = vecMatMul(psi,transitionMatrix);
	}
	
	printCVec(psi);
	
}

vector<cdouble> vecMatMul(vector<cdouble> v, vector<cdouble> m) {
	vector<cdouble> = newVec;
	for(int i=0; i<D; i++) {
		cdouble sum = (0.0,1.0);
		for(int j=0; j<D; j++) {
			sum+= m.at(i*D + j)*v.at(j);
		}
		newVec.pushback(sum);
	}
	return newVec;
}

void printCVec(vector<cdouble> v) {
	double i = 0;
	for(cdouble val : v) {
		x = x0 + i*deltaX;
		i++;
		cout << x << "	" << val*conj(val) << endl;
	}
}

