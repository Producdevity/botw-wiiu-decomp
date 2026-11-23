typedef int s32;

extern "C" int fn_02566fc8(void);
extern "C" int fn_0313ab34(void);

extern "C" s32 fn_025686b0(void) {
    if ((fn_02566fc8() == 0) || (fn_0313ab34() != 0)) {
        return 0;
    }
    return 1;
}
