extern "C" int fn_02b62a40();

extern "C" void fn_02818504(void* object) {
    typedef void (*Method)(void*, int);
    Method method = *(Method*)((char*)*(void**)((char*)object + 0xC) + 0x17C);
    method(object, fn_02b62a40());
}
