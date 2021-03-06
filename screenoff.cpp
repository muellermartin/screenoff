#include <cstdlib>
#include <Windows.h>

int main(int argc, char *argv[])
{
	SendMessage(
		// Send to all top-level windows in the system
		HWND_BROADCAST, // 0xFFFF
		WM_SYSCOMMAND, // 0x112
		// Sets the state of the display.
		// This command supports devices that have power-saving features, such as a battery-powered personal computer
		SC_MONITORPOWER, // 0xF170
		// -1 (the display is powering on)
		// 1 (the display is going to low power)
		// 2 (the display is being shut off)
		2
	);

	return EXIT_SUCCESS;
}
