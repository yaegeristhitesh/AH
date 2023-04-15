#include "Vector_class.h"

Vector::Vector(int dimension)
{
    dim=dimension;
    this->vec = new double[dimension];
}

Vector::Vector(Vector &vector)
{
    this->dim = vector.dim;
    this->vec = new double[dim];

    for( int i{};i<this->dim;i++){this->vec[i]=vector.vec[i];}
}

void Vector::inputTerminal()
{
    for(int i{};i<this->dim;i++){
        std::cin>>this->vec[i];
    }
}

void Vector::printTerminal()
{
    std::cout<<"(";
    for(int i{};i<this->dim;i++){
        std::cout<<this->vec[i]<<", ";
    }
    std::cout<<")\n";
}

double Vector::norm()
{
    double sqrSum=0;
    for(int i{};i<this->dim;i++){sqrSum+=pow(this->vec[i],2);}
    return sqrt(sqrSum);
}

Vector Vector::operator+(Vector vector)
{   
    if(this->dim!=vector.dim) return Vector();
    Vector newVector(this->dim);
    for(int i{};i<this->dim;i++){
        newVector.vec[i] = this->vec[i]+vector.vec[i];
    }
    return newVector;
}

Vector Vector::operator-(Vector vector)
{
    if(this->dim!=vector.dim) return Vector();
    Vector newVector(this->dim);
    for(int i{};i<this->dim;i++){
        newVector.vec[i] = this->vec[i]-vector.vec[i];
    }
    return newVector;
}

double Vector::dot(Vector vector)
{
    double dotPrd{};
    for(int i{};i<this->dim;i++){
        dotPrd += this->vec[i]*vector.vec[i];
    }
    return dotPrd;
}


