#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include<iomanip>
using namespace std;

int main ()
{
    int count = 0;
    float sum = 0;
    float mew = 0;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline))
    {
        sum += atof(textline.c_str());
        count++;
        mew += pow(atof(textline.c_str()),2);

    }
    cout << "Number of data = "<< count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << sum/count << '\n';
    cout << "Standard deviation = " << sqrt(mew/count - pow(sum/count,2)) ;
    return 0;

}






