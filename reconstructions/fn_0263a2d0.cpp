typedef signed char s8;
typedef int s32;

extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_100fd0d4;

extern "C" void fn_0263a2d0(void *arg0) {
    fn_037b8284(arg0, &data_100fd0d4, 0);
    *(*(s8 **)((char *)(arg0) + (0x24))) = 1;
}
