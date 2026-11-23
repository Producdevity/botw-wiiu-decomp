extern "C" int fn_02681a9c(void* object);
extern "C" int fn_0269d440(void* owner);

extern "C" int fn_0267c994(void* object) {
    if (fn_0269d440(*(void**)object) == 0) {
        return 0;
    }
    int result = 1;
    if (*((unsigned char*)object + 0x114) == 0) {
        result = fn_02681a9c(object);
    }
    return result;
}
