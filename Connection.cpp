/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Connection.cpp
 * Author: orion
 * 
 * Created on 9 de Setembro de 2017, 18:52
 */

#include "Connection.h"

Connection::Connection() {
}

static Connection *Connection::getInstance() {
    if (!Connection::sinstance)
        Connection::sinstance = new Connection();
    return Connection::sinstance;
}