typedef int s32;

extern "C" int fn_031cbcb4(void*, void*);
extern "C" void fn_0379c1b4(void *, void *, void *);
extern "C" int data_1046d3ac;

extern "C" void fn_037a3d84(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        fn_0379c1b4(arg0, (void *)0x3F, (void *)(fn_031cbcb4((void *) data_1046d3ac, arg0)));
    }
}
