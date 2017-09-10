/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Connection.h
 * Author: orion
 *
 * Created on 9 de Setembro de 2017, 18:52
 */

#ifndef CONNECTION_H
#define CONNECTION_H

class Connection {
public:
    static Connection *getInstance();
    Connection();
    virtual ~Connection();

    
private:
    static Connection *sinstance;
};

#endif /* CONNECTION_H */

