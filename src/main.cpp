#include <iostream>
#include <Eigen/Dense>

int main(int argc, char** argv) {

    Eigen::Matrix4d m = Eigen::Matrix4d::Random();
    std::cout << "Hello Eigen3 \n";
    std::cout << m << std::endl;
    return 0;
}