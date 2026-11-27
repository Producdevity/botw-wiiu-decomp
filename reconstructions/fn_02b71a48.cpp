typedef unsigned char u8;
typedef int s32;

extern "C" int fn_02e17644(void*);
extern "C" int fn_02e17654(void*);

extern "C" u8 fn_02b71a48(void) {
    s32 result = 0;
    if ((fn_02e17644(0) != 0) && (fn_02e17654(0) == 0)) {
        result = 1;
    }
    return result;
}
