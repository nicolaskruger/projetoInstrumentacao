#include "server.h"

void Server::acceptConnection()
{

   socket  = server.nextPendingConnection();

    // Set : respondToConnection() will be called whenever the data (coming from client) is available
    //connect(socket, SIGNAL(readyRead()), this, SLOT(respondToConnection()) );

    // Set : connectionAboutToClose() will be called whenever the connection is close by the client
    //connect(socket, SIGNAL(disconnected()), this, SLOT(connectionAboutToClose()));
}

Server::Server(QHostAddress ip,short port):genericServer(ip,port)
{

}
