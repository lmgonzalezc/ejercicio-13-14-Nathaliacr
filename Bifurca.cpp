#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
const double w0 =1.0 , gam =0.5;
const double h =0.01 , delta =0.0;
const double w = 2.0/3.0;
const int N =1500;
ofstream outfile;
const double F = 1.35;
double g( double theta0 , double omega0 , double t);
double f( double theta0 , double omega0 , double t);
int main ( void ){
    
    double omega =0.0;
    double theta =0.2;
    outfile.open("datos5.dat");
    for ( int i =0; i < N;i ++){
        outfile<< i*h << " " << theta << " " << omega << " " << F << "\n";
        omega = omega +h* f(theta , omega , i*h);
        theta = theta +h* g(theta , omega , i*h);
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
