/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ControllerPrincipal.cpp
 * Author: orion
 * 
 * Created on 9 de Setembro de 2017, 16:43
 */

#include "ControllerPrincipal.h"

ControllerPrincipal::ControllerPrincipal() {
}

ControllerPrincipal::ControllerPrincipal(ModelPosition* pos, ModelRanger* laser, vector<string> tokens) {
    this->numIterations = 0;
    this->pos = pos;
    this->laser = laser;
    //cout<<tokens[0]<<endl;
}

ControllerPrincipal::~ControllerPrincipal() {
}

void ControllerPrincipal::runnig() {
    this->numIterations++;
    double fx = 0;
    double fy = 0;
    double norm = 0;
    double angTarget;
    double linAccel = 0;
    double rotAccel = 0;
    double linSpeed;
    double rotSpeed;
    cout << "Morte in runing" << endl;
    //this->pos->SetXSpeed(linSpeed);
    //this->pos->SetTurnSpeed(rotSpeed);
    //this->comunication->finish();
}
