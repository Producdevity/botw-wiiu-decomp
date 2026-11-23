typedef signed char s8;
typedef int s32;

extern "C" int fn_0339a0d0(void *);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_1029c86c;

extern "C" void fn_032718ec(void *arg0) {
    (*(s8 *)((char *)(arg0) + (0x20))) = fn_0339a0d0((*(void **)((char *)(arg0) + (0))));
    fn_037b8284(arg0, &data_1029c86c, 0);
}
