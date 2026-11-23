typedef int s32;
typedef float f32;

extern "C" void fn_0339bd70(void *);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" f32 data_101267b4;
extern "C" s32 data_101267b8;

extern "C" void fn_0275ec00(void *arg0) {
    fn_0339bd70((*(void **)((char *)(arg0) + (0))));
    (*(f32 *)((char *)(arg0) + (0x50))) = (f32) data_101267b4;
    fn_037b8284(arg0, &data_101267b8, 0);
}
