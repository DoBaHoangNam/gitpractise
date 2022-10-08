#include <stdio.h>
#include <winsock2.h>
#include <windows.h>
#pragma comment(lib, "ws2_32")
#pragma warning(disable:4996)
int main()
{
	WSADATA wsa;
	WSAStarup(MAKEWORD(2,2),&wsa);
	
	SOCKET client  = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
	
	SOCKADDR_IN addr;
    addr.sin_family = AF_INET;
    addr.sin_addr.s_addr = inet_addr("127.0.0.1");
    addr.sin_port = htons(8000);
    
    
     system("pause");

    int ret = connect(client, (SOCKADDR*)&addr, sizeof(addr));
    if (ret == SOCKET_ERROR)
    {
        ret = WSAGetLastError();
        printf("Ket noi khong thanh cong - %d\n", ret);
        return 1;
    }
    
	TCHAR  infoBuf[256];
	DWORD  bufCharCount = 256;
	bufCharCount = 256;
	GetComputerName( infoBuf, &bufCharCount);
    send(client,infoBuf,bufCharCount,0);
    
}
