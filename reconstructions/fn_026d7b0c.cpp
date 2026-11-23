typedef int s32;

extern "C" void fn_026ee3ec(void*);
extern "C" void fn_0383e968(void *, int, int, int);

extern "C" s32 data_10114880;

extern "C" void fn_026d7b0c(void **arg0) {
    fn_026ee3ec(arg0);
    fn_0383e968(*arg0, (s32) &data_10114880, 2, (s32) ((char *)arg0 + 0x7C));
}
