typedef int s32;

extern "C" int fn_02e17fa8(void*);
extern "C" int fn_02e18f44(void*);
extern "C" void fn_02e18f54(void*, void*);

extern "C" s32 fn_021c65e4(void) {
    s32 current;
    s32 result;

    result = 0;
    current = fn_02e17fa8(0);
    if (current > fn_02e18f44(0)) {
        fn_02e18f54((void *) current, 0);
        result = 1;
    }
    return result;
}
