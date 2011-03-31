#ifndef EIRCOMKEYGEN_H
#define EIRCOMKEYGEN_H
#include "keygenthread.h"

class EircomKeygen : public KeygenThread
{
    private:
        QString dectoString( int mac);

    public:
        EircomKeygen(WifiNetwork * router );
        void run();
};

#endif // EIRCOMKEYGEN_H
