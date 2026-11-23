typedef int s32;

extern "C" void fn_025877f0(void*, void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_100e5bac;

extern "C" void fn_025878b8(void *arg0) {
    void *temp_r4;

    temp_r4 = (*(void **)((char *)(arg0) + (0x30)));
    (*(void **)((char *)(arg0) + (0x2C))) = temp_r4;
    fn_025877f0(arg0, temp_r4);
    fn_037b8284(arg0, &data_100e5bac, 0);
}
