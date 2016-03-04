
#include <thread>

int CreateClientMain(int Port, char* IP);
int CreateServerMain(int Port, char* IP);

int CreateServer(int Port, char* IP)
{
	std::thread ServerThread(CreateServerMain, Port, IP);

	ServerThread.detach();
}

int CreateClient(int Port, char* IP)
{
	std::thread ServerThread(CreateClientMain, Port, IP);

	ServerThread.detach();
}