typedef signed char s8;
typedef int s32;

extern "C" int fn_02a19f40(void*);
extern "C" void* data_10463748;

extern "C" void fn_020761ec(void *arg0) {
    void* const* vt1;
    if (((void *) data_10463748 != 0) && (fn_02a19f40(data_10463748) != 0)) {
        ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(arg0) + (0xC)))[65])(arg0);
        (*(s8 *)((char *)(arg0) + (0x10))) = 0;
    }
}
