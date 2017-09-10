/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ModuloAFA.h
 * Author: ander
 *
 * Created on 9 de Setembro de 2017, 13:06
 */

#ifndef MODULOAFA_H
#define MODULOAFA_H
#include <iostream>
#include "option.hh"
#include "Comunication.h"
using namespace Stg;
using namespace std;

class ModuloAFA {
public:
    ModuloAFA(Comunication *connect);
    int getState(string estado);
    void repulseForce(double &fx, double &fy, ModelRanger lazer);
    void atrativeForce(double &fx, double &fy);
    virtual ~ModuloAFA();
private:
    Comunication *connect;

};

#endif /* MODULOAFA_H */

