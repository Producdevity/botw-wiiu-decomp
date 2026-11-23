typedef int s32;

extern "C" void fn_025f6f44(void*, void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_100f2cb8;

extern "C" void fn_025f7418(void *arg0) {
    fn_025f6f44(arg0, (char *)arg0 + 0x38);
    fn_037b8284(arg0, &data_100f2cb8, 0);
}
