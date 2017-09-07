#include <iostream>
#include <Eigen/Dense>
#define n 4096

int main()
{
  // Eigen::Matrix<double, n, n> m; // 4096 too large for static allocation
  Eigen::MatrixXd A(n,n);
  Eigen::MatrixXd B(n,n);
  Eigen::MatrixXd C(n,n);
  C = A * B;
}