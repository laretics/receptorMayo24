#include "signalClient.h"

//Receptor Marratxinet

class receiver
{
    public:
        signalClient e11 = signalClient(3,27,31,29,28,signalClient::typeOrder::toParada);
        signalClient e12 = signalClient(4,23,22,25,24,signalClient::typeOrder::toParada);

    receiver();
   
 
};


