extern "C" int fn_02511948(void* object);
extern "C" int fn_033aa78c(void* owner, int value);

extern "C" int fn_0277373c(void* object) {
    if (fn_033aa78c(*(void**)object, 0) != 0) {
        return fn_02511948(object);
    }
    return *(int*)((char*)object + 0xA0);
}
