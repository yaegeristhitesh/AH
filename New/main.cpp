#include <iostream>
using namespace std;
class vec{
    int dim;//dimension of vectors
    int num;//number of vectors
    double**data;
    public:
    vec(int a,int b):dim(a),num(b){}
    vec() = default;
    
};
