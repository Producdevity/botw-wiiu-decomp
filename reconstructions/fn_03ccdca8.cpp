typedef int s32;

extern "C" void fn_03cca1b0(void*, void*);
extern "C" int fn_03cca248(void *);

extern "C" void *fn_03ccdca8(void *arg0) {
    s32 var_r31;

    var_r31 = fn_03cca248(arg0) & 7;
    if (var_r31 != 0) {
        var_r31 = 8 - var_r31;
        fn_03cca1b0(arg0, (void *) var_r31);
    }
    return (void *) var_r31;
}
