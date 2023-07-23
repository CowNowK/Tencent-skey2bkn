#include "getBkn.h"

#ifdef _WIN32
    #define EXPORT_API __declspec(dllexport)
#else
    #define EXPORT_API
#endif

EXPORT_API int __stdcall getBkn(const char* skey) {
    int hash_value = 5381;
    for (const char* c = skey; *c != '\0'; ++c) {
        hash_value += (hash_value << 5) + static_cast<int>(*c);
    }
    return hash_value & 2147483647;
}