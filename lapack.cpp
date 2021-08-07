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

    std::cout << "b= [" << b[0] << ", " << b[1] << " ]" << std::endl;
    std::cout << "a= |" << a[0] << ", " << a[1] << " |" << std::endl;
    std::cout << "   |" << a[2] << ", " << a[3] << " |" << std::endl;

    dgesv_(&dim, &nrhs,& a[0], &lda, ipiv, & b[0], &ldb, &info);
    
    std::cout << "LU=|" << a[0] << ", " << a[1] << " |" << std::endl;
    std::cout << "   |" << a[2] << ", " << a[3] << " |" << std::endl;
    std::cout << "x= [" << b[0] << ", " << b[1] << " ]" << std::endl;


    return 0;
}