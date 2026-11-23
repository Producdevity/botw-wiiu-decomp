typedef signed char s8;
typedef int s32;

extern "C" int fn_024cdf04(void*);
extern "C" int fn_0294bf4c(int);
extern "C" void fn_030ea2e0(void *);
extern "C" bool fn_0378da88(void *);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_100c9454;
extern "C" s32 data_100c945c;

extern "C" void fn_024ce07c(void *arg0) {
    (*(s8 *)((char *)(arg0) + (0x20))) = 0;
    if ((fn_0378da88((void *)(fn_0294bf4c((*(s32 *)((char *)(arg0) + (0)))))) == 0) || (fn_024cdf04(arg0) != 0)) {
        fn_030ea2e0(arg0);
        fn_037b8284(arg0, &data_100c9454, 0);
        return;
    }
    fn_037b8284(arg0, &data_100c945c, 0);
}
