extern "C" int fn_02ea3f34(void*, int);
extern "C" int fn_02ea7a9c(void*);

extern "C" unsigned char fn_02ea7af8(void* object)
{
    if (fn_02ea3f34(object, 1) == 0 && fn_02ea3f34(object, 2) == 0) {
        return 0;
    }
    int result = 0;
    if (*(int*)((char*)object + 0x3124) <= 0 && fn_02ea7a9c(object) < 3) {
        result = 1;
    }
    return result;
}
