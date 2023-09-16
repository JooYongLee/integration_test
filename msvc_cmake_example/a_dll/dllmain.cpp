// dllmain.cpp : DLL 애플리케이션의 진입점을 정의합니다.
//#include "pch.h"
#ifdef WIN32
#include <Windows.h>
#else
#include <windef.h>
#endif //
BOOL APIENTRY dllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

