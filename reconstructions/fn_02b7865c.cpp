typedef int s32;

extern "C" int fn_03072538(void*, void*);
extern "C" int fn_03072870(void);

extern "C" s32 fn_02b7865c(void *arg0, void *arg1) {
    if ((fn_03072538(arg0, arg1) == 0) && (fn_03072870() != 0)) {
        return 0;
    }
    return 1;
}
