typedef unsigned char u8;
typedef int s32;

extern "C" int fn_02e1a2a0(void*);
extern "C" int fn_02e1a2b0(void*);
extern "C" int fn_02e1a2c0(void*);

extern "C" u8 fn_02da6120(void) {
    s32 result = 0;
    if ((fn_02e1a2a0(0) != 0) && (fn_02e1a2b0(0) == 0) && (fn_02e1a2c0(0) != 0)) {
        result = 1;
    }
    return result;
}
