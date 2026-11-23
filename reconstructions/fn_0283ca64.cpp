typedef int s32;

extern "C" int fn_025a0e1c(void*);
extern "C" void fn_0283c854(void *);

extern "C" s32 fn_0283ca64(void *arg0) {
    if (fn_025a0e1c(arg0) != 0) {
        fn_0283c854(arg0);
        return 1;
    }
    return 0;
}
