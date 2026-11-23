typedef int s32;

extern "C" void fn_02950880(int);
extern "C" void fn_02b38a6c(void*, void*, int);
extern "C" bool fn_0378da88(void *);

extern "C" void fn_025fc3d4(s32 *arg0) {
    if (fn_0378da88((char *)arg0 + 0x2C) != 0) {
        fn_02b38a6c((char *)arg0 + 0x4C, (char *)arg0 + 0x2C, 1);
    }
    fn_02950880(*arg0);
}
