typedef int s32;

extern "C" int fn_03061260(int);
extern "C" int fn_030612ac(void);

extern "C" s32 fn_0306133c(void) {
    if ((fn_030612ac() == 0) || (fn_03061260(4) <= 0)) {
        return 0;
    }
    return 1;
}
