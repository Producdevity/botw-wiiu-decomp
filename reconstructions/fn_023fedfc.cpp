typedef int s32;
typedef float f32;

extern "C" void fn_023415f4(void*);
extern "C" float fn_02950a18(void*);
extern "C" float fn_02950a5c(void*);

extern "C" void fn_023fedfc(void *arg0) {
    fn_023415f4(arg0);
    (*(f32 *)((char *)(arg0) + (0x38))) = fn_02950a18((*(void **)((char *)(arg0) + (0))));
    (*(f32 *)((char *)(arg0) + (0x3C))) = fn_02950a5c((*(void **)((char *)(arg0) + (0))));
    (*(s32 *)((char *)(arg0) + (0x34))) = 0;
}
