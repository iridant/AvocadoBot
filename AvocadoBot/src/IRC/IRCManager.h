/*
 * IRCManager.h
 *
 *  Created on: May 13, 2012
 *      Author: mbreedlove
 */

#ifndef IRCMANAGER_H_
#define IRCMANAGER_H_

#include <vector>

#include <windows.h>
#include <process.h>
#include "IRCClient.h"
#include "../OSInfo.h"
#include "../Configs.h"

void monitor(void*);
void parseData(IRCClient*, std::string, char);
std::string executeCommand(std::string, std::string);

class IRCManager {
public:
	IRCManager();
	virtual ~IRCManager();

	std::string generateNick();

	char getIRCCommandPrefix();

	void start();
	void stop();
	bool isConnected();
	IRCClient* ircc;

protected:
	HANDLE hThread;
	bool connected;

	char IRC_CommandPrefix;

	HANDLE startThread();
};

#endif /* IRCMANAGER_H_ */