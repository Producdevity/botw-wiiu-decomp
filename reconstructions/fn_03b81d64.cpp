extern "C" char* fn_03b884f4(void* context);

extern "C" char* fn_03b81d64(void* object) {
    return fn_03b884f4(*(char**)((char*)object + 12));
}
