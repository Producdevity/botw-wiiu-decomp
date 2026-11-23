typedef int s32;

extern "C" int fn_021827c8(void);
extern "C" unsigned char fn_0294ba8c(void);

extern "C" s32 fn_02182a60(void) {
    if ((fn_021827c8() == 0) && (fn_0294ba8c() == 0)) {
        return 0;
    }
    return 1;
}
