/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ModuloAFA.cpp
 * Author: ander
 * 
 * Created on 9 de Setembro de 2017, 13:06
 */

#include "ModuloAFA.h"

ModuloAFA::ModuloAFA(Comunication *connect) {
    this->connect = connect;
    exit(0);
}


int ModuloAFA::getState(string estado) {
    if (estado.compare("Entrando") == 0) {
        return 1;
    } else if (estado.compare("Saindo") == 0) {
        return 2;
    }
    return 0;
}

void ModuloAFA::repulseForce(double &fx, double &fy, ModelRanger lazer){
    
}

void atrativeForce(double &fx, double &fy){
    
}