
#include <iostream>
#include <locale>
#include <string>
#include <codecvt>
#include "net_config.h"

#pragma execution_character_set("utf-8")

using namespace std;

int main()
{
	std::locale::global(std::locale(""));

	NetConfig config;
	//网卡的key可以从注册表获取, 路径: 计算机\HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Services\Tcpip\Parameters\Interfaces\
	config.set_key("{cd574b17-73e1-42df-a50c-f95d7f15c1d0}");

	if (config.enable_dhcp()) {
		cout << "enable_dhcp success" << endl;

	}
	else {
		cout << "error code: " << config.get_last_error_code() << endl;
	}

	
	if (config.set_ip_config("192.168.1.100", "255.255.255.0", "192.168.1.1")) {
		cout << "set_ip_config success" << endl;
	}
	else {
		cout << "error code: " << config.get_last_error_code() << endl;
	}

	if (config.set_dns("255.255.255.0", "")) {
		cout << "set_dns success" << endl;
	}
	else {
		cout << "error code: " << config.get_last_error_code() << endl;
	}				
	
	cin.get();
	return 0;
}