#include "Main.h"
#include "others/xor.h"

bool __stdcall DllMain(HINSTANCE hModule, DWORD dwAttached, LPVOID lpvReserved)
{
    //  DisableThreadLibraryCalls(hModule);
    HideThread(hModule);
    if (dwAttached == DLL_PROCESS_ATTACH) {
        //  UnlinkModuleFromPEB(hModule);
        //  AllocConsole();
        //  freopen("CONOUT$", "w", stdout);
        SetupWindow();
        DirectXInit(MyWnd);

        _beginthreadex(0, 0, cache, 0, 0, 0);

        CloseHandle(hModule);
    }
    return 1;
}






























