typedef float f32;

extern "C" void fn_0210daa0(void*);
extern "C" void fn_02b74344(float);
extern "C" void* fn_037966a8(void *);

extern "C" f32 data_1002328c;

extern "C" void fn_0210c518(void *arg0) {
    fn_0210daa0(arg0);
    if ((*(*(f32 **)((char *)(arg0) + (0x80))) < data_1002328c) && (fn_037966a8((*(void **)((char *)(arg0) + (0)))) != 0)) {
        fn_02b74344(*(*(f32 **)((char *)(arg0) + (0x80))));
    }
}
