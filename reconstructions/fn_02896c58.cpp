typedef int s32;
typedef float f32;

extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" f32 data_10150df4;
extern "C" s32 data_10150df8;

extern "C" void fn_02896c58(void *arg0, void *arg1) {
    fn_037b8284(arg0, &data_10150df8, arg1);
    (*(f32 *)((char *)(arg0) + (0x24))) = (f32) data_10150df4;
}
