typedef int s32;

extern "C" int fn_02da2328(void*);
extern "C" int fn_031726fc(void*, int);
extern "C" void * data_1046ce48;

extern "C" s32 fn_02da55ac(void *arg0) {
    void* const* vt1;
    if ((fn_02da2328(arg0) != 0) && (((s32 (*)(void *))(vt1 = *(void* const**)((char *)(arg0) + (0xE8)))[449])(arg0) == 0) && (fn_031726fc(data_1046ce48, 3) == 0)) {
        return 1;
    }
    return 0;
}
