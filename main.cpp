#include "newton.h"

int main()
{
    cout.precision(15);
    double x1 = 1, x2 = 5;
    int max_iter = 100;

    // analytical jacobian
    solveNewtonsMethod(x1, x2, E1, E2, max_iter);

    // numerical jacobian M = 0.01, M = 0.05 и M = 0.1
    vector<double> vec_M = {0.01, 0.05, 0.1};
    for(auto m : vec_M){
        solveNewtonsMethod(x1, x2, E1, E2, max_iter, m);
    }

    return 0;
}