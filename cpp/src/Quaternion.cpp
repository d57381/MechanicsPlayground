#include "../header/Quaternion.hpp"

Quaternion::Quaternion(const std::vector<double>& q){
    components_ = q;
}


const double& Quaternion::w(){
    return components_[0];
}

const double& Quaternion::x(){
    return components_[1];
}

const double& Quaternion::y(){
    return components_[2];
}

const double& Quaternion::z(){
    return components_[3];
}

void Quaternion::to_string(){
    std::cout << w() << "i" << " + " << x() << "j + " << y() << "k + " << z() << std::endl;
}