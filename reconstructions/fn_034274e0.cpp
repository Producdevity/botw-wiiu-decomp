typedef int s32;

extern "C" int fn_031a909c(void);
extern "C" int fn_031a927c(void);

extern "C" s32 fn_034274e0(void) {
    if ((fn_031a909c() != 0) && (fn_031a927c() == 0)) {
        return 1;
    }
    return 0;
}
