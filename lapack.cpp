// include c++ headder
#include <memory>
#include <iostream>
#include <vector>

extern "C" void dgesv_(int *n, int *nrhs, double *a, int *lda, int *ipiv, double *b, int *ldb, int *info);

int main()
{
    std::cout << "Lapack call!" << std::endl;
    int dim = 2;    
    int nrhs = 1;
    int lda = dim;
    int ldb = dim;
    int info;
    int ipiv[dim];

    std::vector<double> a, b;

    a.push_back(1);
    a.push_back(1);
    a.push_back(1);
    a.push_back(-1);

    b.push_back(2);
    b.push_back(0);


    dgesv_(&dim, &nrhs,& a[0], &lda, ipiv, & b[0], &ldb, &info);


    return 0;
}