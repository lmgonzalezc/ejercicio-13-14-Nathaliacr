#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
const double w0 =1.0 , gam =0.2;
const double h =0.1 , delta =1.0;
const double F =0.4 , w =0.2;
const int N = 1000;

ofstream outfile;

double g( double theta0 , double omega0 , double t);
double f( double theta0 , double omega0 , double t);

int main ( void ){
    double omega =0.1;
    double theta =0;
    outfile.open("datos.dat");
    for ( int i =0; i < N;i ++){
        outfile<< i*h << " " << theta << " " << omega << " \n " ;
        omega = omega + h* f(theta , omega , i*h);
        theta = theta + h* g(theta , omega , i*h);
    }
    outfile.close();
    return 0;
}
double g( double theta0 , double omega0 , double t){
    return omega0 ;
}
double f( double theta0 , double omega0 , double t){
    return -w0 * w0 * sin(theta0)- gam * omega0 + F* sin (w*t + delta);
}
