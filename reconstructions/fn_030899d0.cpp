typedef unsigned char u8;
typedef int s32;

extern "C" int fn_02de0780(void);
extern "C" int fn_02de09a4(void);
extern "C" int fn_02de09e0(void);
extern "C" int fn_02de09ec(void);

extern "C" u8 fn_030899d0(void) {
    s32 result;

    result = 1;
    if ((fn_02de09a4() == 0) && (fn_02de0780() == 0) && (fn_02de09e0() == 0) && (fn_02de09ec() == 0)) {
        result = 0;
    }
    return result;
}
