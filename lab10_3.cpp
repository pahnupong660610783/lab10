#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    ifstream source;
    source.open("score.txt");
    
    int all=0;
    double sum = 0, xi = 0;
    string text;
    
	while(getline(source,text)){
	     sum += atof(text.c_str());
	     xi += pow(atof(text.c_str()),2);
	     all++;
	}
	
    cout << "Number of data = " << all << "\n";
    cout << setprecision(3);
    double mean = sum/all;
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << sqrt((xi/all)-pow(mean,2));
    
    
    
    
    
    
    
    
}