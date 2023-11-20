#pragma once

#ifdef LB_PLATFORM_WINDOWS
    #ifdef LB_BUILD_DLL
        #define LAMB_API __declspec(dllexport)
    #else
        #define LAMB_API __declspec(dllimport)
    #endif // LB_BUILD_DLL
#else
    #error Lamb only supports Windows!
#endif // LB_PLATROEM_WINDOWS
