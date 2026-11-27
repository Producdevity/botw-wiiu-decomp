typedef unsigned char u8;
typedef int s32;

extern "C" int fn_02e18dd4(void*);
extern "C" int fn_02e18e14(void*);

extern "C" u8 fn_02da59dc(void) {
    s32 result;

    result = 0;
    if ((fn_02e18dd4(0) != 0) && (fn_02e18e14(0) == 0)) {
        result = 1;
    }
    return result;
}
