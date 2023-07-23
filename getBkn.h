#ifndef GETBKN_H
#define GETBKN_H

#include <string>

#ifdef _WIN32
    #define EXPORT_API __declspec(dllexport)
#else
    #define EXPORT_API
#endif

#ifdef __cplusplus
extern "C" {
#endif

// 一定要使用 __stdcall 否则易语言调用会导致堆栈错误
EXPORT_API int __stdcall getBkn(const char* skey);

#ifdef __cplusplus
}
#endif

#endif