#include <iostream>
#include <Eigen/Dense>

int main(int argc, char** argv) {

    Eigen::Matrix4d m = Eigen::Matrix4d::Random();
    std::cout << "Hello Eigen3 \n";
    std::cout << m << std::endl;
    double i,j;
    double max_coeff = m.maxCoeff(&i, &j);
    std::cout << "Maxcoeff: " << max_coeff << " is at row: " << i << " and column: " << j << std::endl;
    return 0;
}