class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double>arr(2);
        double kelvin=celsius+273.15;
        double fahrenheit=celsius*1.80+32.00;
        arr[0]=kelvin;
        arr[1]=fahrenheit;
    return arr;
    }
};