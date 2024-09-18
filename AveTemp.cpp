#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double totalTemperature = 0;
    double temperature;
    int numberOfTemperatures;
    
    cout << "How many temperatures do you want to add?" << endl; 

    cin >> numberOfTemperatures;
    int temperatures[numberOfTemperatures];

    for(int i = 0; i < numberOfTemperatures; i++){
    cout << "Please give a temperature." << endl;
    
    cin >> temperature;
    temperatures[i] = temperature;
    totalTemperature += temperature;

    }

    cout << "Average temp is: " << fixed << setprecision(1) << totalTemperature / numberOfTemperatures << " degrees";

    return 0;
}