typedef int s32;
typedef float f32;

extern "C" void fn_03485f68(void*);
extern "C" void fn_03487920(void *);
extern "C" void fn_0348cfa4(void*, float);

extern "C" f32 data_10186ca4;

extern "C" void fn_02a0d02c(void *arg0) {
    fn_0348cfa4((*(void **)((char *)(arg0) + (0x2C))), data_10186ca4);
    fn_03487920((*(void **)((char *)(arg0) + (0x2C))));
    fn_03485f68((*(void **)((char *)(arg0) + (0x2C))));
    (*(s32 *)((char *)(arg0) + (0x18))) = (s32) ((*(s32 *)((char *)(arg0) + (0x18))) | 4);
}
