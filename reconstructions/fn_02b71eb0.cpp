typedef int s32;

extern "C" s32 fn_03394870(s32, s32);
extern "C" int fn_0339488c(void *, void *);

extern "C" s32 fn_02b71eb0(s32 arg0, void *arg1) {
    if (((fn_03394870(arg0, -0x268A10F2) != 0) && (fn_0339488c(arg1, (void *)0xD975EF0E) != 0)) || ((fn_03394870(arg0, 0x1C516745) != 0) && (fn_0339488c(arg1, (void *)0x1C516745) != 0))) {
        return 1;
    }
    return 0;
}
