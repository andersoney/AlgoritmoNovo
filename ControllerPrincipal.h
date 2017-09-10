/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ControllerPrincipal.h
 * Author: orion
 *
 * Created on 9 de Setembro de 2017, 16:43
 */

#ifndef CONTROLLERPRINCIPAL_H
#define CONTROLLERPRINCIPAL_H
#include "includeS.h"

class ControllerPrincipal {
public:
    ControllerPrincipal();
    ControllerPrincipal(ModelPosition *pos, ModelRanger *laser, vector<string> tokens);
    virtual ~ControllerPrincipal();
    void runnig();
private:
    
    int numIterations;
    ModelPosition* pos;
    ModelRanger* laser;

};

#endif /* CONTROLLERPRINCIPAL_H */

