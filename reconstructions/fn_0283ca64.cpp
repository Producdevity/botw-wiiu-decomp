typedef int s32;

extern "C" int fn_025a0e1c(void*);
extern "C" void fn_0283c854(void *);

extern "C" s32 fn_0283ca64(void *object) {
    if (fn_025a0e1c(object) != 0) {
        fn_0283c854(object);
        return 1;
    }
    return 0;
}
