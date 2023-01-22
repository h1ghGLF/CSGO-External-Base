#include "Memory/memory.h"
#include <iostream>
#include "offsets.h"

Memory mem{ "csgo.exe" };

auto client = mem.GetModuleAddress("client.dll");
auto engine = mem.GetModuleAddress("engine.dll");

auto localPlayer = mem.Read<DWORD>(signatures::dwLocalPlayer);

#define	FL_ONGROUND (1<<0)
#define FL_DUCKING (1<<1)
#define	FL_WATERJUMP (1<<2)	

namespace settings {
	int i_SampleReadInt = mem.Read<int>(netvars::m_iDefaultFOV);
	bool b_SambleBool = true;
}

void ConsoleColorRed() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
}

void ConsoleColorWhite() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}

int main() {
	SetConsoleTitle("BloodWorks External");

	ConsoleColorRed();
	std::cout << "[BW] ";
	ConsoleColorWhite();
	std::cout << "client.dll = 0x" << std::hex << client << std::dec << std::endl;

	ConsoleColorRed();
	std::cout << "[BW] ";
	ConsoleColorWhite();
	std::cout << "engine.dll = 0x" << std::hex << engine << std::dec << std::endl;

	while (true) {
		
	}
}