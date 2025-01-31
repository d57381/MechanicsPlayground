#ifndef QUATERNION  
#define QUATERNION

#include<iostream>
#include<vector>

class Quaternion{

private:
    std::vector<double> components_;

public:
    Quaternion(const std::vector<double>& q);
    const double& w();
    const double& x();
    const double& y();
    const double& z();

    void to_string();

    //Quaternion operator+(const Quaternion& b);

};
#endif