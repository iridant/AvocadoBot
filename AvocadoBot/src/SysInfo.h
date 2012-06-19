#ifndef SYSINFO_H_
#define SYSINFO_H_

#include <sstream>
#include <windows.h>

namespace SysInfo {
	// Operating System
	std::string getOSVersionName();
	std::string getShortOSVersionName();
	std::string getHostname();
	std::string getCPUArch();
	int getCPUCount();
	std::string SysInfoString();

	// IRC
	std::string generateIRCNickname();
}

#endif /* SYSINFO_H_*/
