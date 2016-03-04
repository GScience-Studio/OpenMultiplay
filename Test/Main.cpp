
#pragma comment(lib, "..\\release\\OpenMultiplay.lib")

int CreateClient(int Port, char* IP);
int CreateServer(int Port, char* IP);

int main()
{
	CreateServer(12211, "123.121.190.198");

	while (true);
}