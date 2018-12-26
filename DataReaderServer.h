#ifndef MILESTONE_DATAREADERSERVER_H
#define MILESTONE_DATAREADERSERVER_H

#include "DataBinds.h"
#include "DataVars.h"

class DataReaderServer {
private:
    int port;
    int perSec;
//    int socketFd;
    DataBinds *dataBinds;
    DataVars *dataVars;
    pthread_mutex_t mutex;


public:
    DataReaderServer(int &port, int &perSec, DataBinds *dataBinds, DataVars *dataVars, pthread_mutex_t &mutex);
    void openServer();
//    ~DataReaderServer();
};


#endif //MILESTONE_DATAREADERSERVER_H