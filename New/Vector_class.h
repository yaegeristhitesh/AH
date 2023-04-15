//
//  Vector_class.h
//  New
//
//  Created by Hitesh Choudhary on 15/04/23.
//

#ifndef Vector_class_h
#define Vector_class_h
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <stdbool.h>
using namespace std;
class vec{
    private:
    int dim;//dimension of vectors
    int num;//number of vectors
    bool check;
    double**data;
    double**gram;//For storing gram schmidth vectors
    public:
    vec(int a,int b):dim(a),num(b){}
    vec(){};
    void set_dimension(int a){dim =a;check = false;}
    void set_number(int a){num =a;check = false;}
    void make_space(){
        if(num >0 && dim >0 && check == false){
            data = (double**)malloc(num*sizeof(double*));gram = (double**)malloc(num*sizeof(double*));
            check = true;
            for(int i=0;i<num;i++){ data[i] = (double*)malloc(dim*sizeof(double));
            gram = (double**)malloc(num*sizeof(double*));}
        }else{cout<<"Sorry you can't assign memory"<<endl;}
    }
    void input(){
        for(int i =0;i<num;i++)
            for(int j =0;j<dim;j++)
                cin>>data[i][j];
    }
    double norm(int index){
        double sum =0.0;
        for(int i=0;i<dim;i++)
            sum += pow(data[index][i],2);
        sum = pow(sum,0.5);
        return sum;
    }
    double dot(int i,int j){
        double value =0.0;
        for(int t=0;t<num;t++)
            value += data[i][t]*(data[j][t]);
        return value;
    }
};

#endif /* Vector_class_h */
