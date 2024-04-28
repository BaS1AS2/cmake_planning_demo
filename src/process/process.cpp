#include <iostream>
#include "process.h"
#include <Eigen/Dense>

using std::cout, std::endl;
using Eigen::Matrix2d;

void Process::planProcess() {
    cout << "This is planning process!" << endl;
    my_map.mapInfo();

    Matrix2d m(2, 2);
    m(0, 0) = 3;
    m(1, 0) = 5;
    m(0, 1) = -1;
    m(1, 1) = m(1, 0) + m(0, 1);
    cout << m << endl;

    cout << "plainning success!" << endl;
}