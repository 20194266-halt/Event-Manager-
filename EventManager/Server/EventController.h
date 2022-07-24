#ifndef EventController
#define EventController

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <WinSock2.h>
#include <WS2tcpip.h>
#include <string>
#include "process.h"
#include <map>
#include <vector>
#include "Data.h"

using namespace std;

#define BUFF_SIZE 2048
#define ENDING_DELIMITER "\r\n"

string createEvent(string s, map<string, string>&eventNameMap1, int& countEvent, map<string, string>&nameAndPass1);

string inviteHandling(string s, map<string, string>&nameAndPass, map<string, string>&eventNameMap);

string inviteReplyHandling(string s, map<string, string>&nameAndPass, map<string, string>&eventNameMap);

int requestHandling(string s);

int requestReplyHandling(string s);

string listRequest(string user);

string getInvitationList(string userName);

string getEventList();
#endif