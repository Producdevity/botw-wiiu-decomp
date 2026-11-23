typedef signed char s8;
typedef int s32;

extern "C" void fn_025306a0(void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_100d7608;

extern "C" void fn_0253084c(void *arg0) {
    fn_025306a0(arg0);
    (*(s8 *)((char *)(arg0) + (0xD8))) = 0;
    fn_037b8284(arg0, &data_100d7608, 0);
}
