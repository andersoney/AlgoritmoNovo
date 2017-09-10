/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ander
 *
 * Created on 9 de Setembro de 2017, 12:59
 */


#include "ControllerPrincipal.h"
#include "includeS.h"
#include "Connection.h"

int CallBack(Model *pos, ControllerPrincipal *controller);
void Tokenize(const string &str,
        vector<string> &tokens);
/*
 * 
 */
ControllerPrincipal *controller;

extern "C" int Init(Model *mod, CtrlArgs *args) {
    vector<string> tokens;
    Tokenize(args->worldfile, tokens);

    ModelPosition *pos = (ModelPosition *) mod;
    pos->Subscribe();

    ModelRanger *laser = (ModelRanger *) mod->GetChild("ranger:1");
    laser->Subscribe();
    controller = new ControllerPrincipal(pos, laser, tokens);
    pos->AddCallback(Model::CB_UPDATE, (model_callback_t) CallBack, controller);
    Connection *s=Connection::instance();

    //robot->init(atoi(tokens[1].c_str()));
    return 0;
}

int CallBack(Model *pos, ControllerPrincipal *controller) {
    cout << endl << endl;
    controller->runnig();
    return 0;
}

void Tokenize(const string &str,
        vector<string> &tokens) {
    const string &delimiters = " ";
    // Skip delimiters at beginning.
    string::size_type lastPos = str.find_first_not_of(delimiters, 0);
    // Find first "non-delimiter".
    string::size_type pos = str.find_first_of(delimiters, lastPos);

    while (string::npos != pos || string::npos != lastPos) {
        // Found a token, add it to the vector.
        tokens.push_back(str.substr(lastPos, pos - lastPos));
        // Skip delimiters.  Note the "not_of"
        lastPos = str.find_first_not_of(delimiters, pos);
        // Find next "non-delimiter"
        pos = str.find_first_of(delimiters, lastPos);
    }
}