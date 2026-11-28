typedef unsigned char u8;
typedef int s32;

extern "C" int fn_02e17694(void*);
extern "C" int fn_02e176a4(void*);

extern "C" u8 fn_0256df9c(void) {
    s32 first = fn_02e17694(0);
    s32 second = fn_02e176a4(0);
    s32 result = 0;
    if ((first != 0) && (second == 0)) {
        result = 1;
    }
    return result;
}
