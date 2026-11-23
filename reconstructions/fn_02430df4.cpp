typedef int s32;
typedef float f32;

extern "C" void fn_020e0d38(void*);
extern "C" void fn_02b7f998(float *, void *);
extern "C" float fn_03c6fcf0(const float *);

extern "C" void fn_02430df4(void *arg0) {
    f32 temp_f1;

    fn_020e0d38(arg0);
    (*(s32 *)((char *)(arg0) + (0xA8))) = 0;
    fn_02b7f998((float *)((char *)arg0 + 0x78), (*(void **)((char *)(arg0) + (0))));
    temp_f1 = fn_03c6fcf0((const float *)((char *)(*(void **)((char *)(arg0) + (0))) + 0x268));
    (*(f32 *)((char *)(arg0) + (0x9C))) = temp_f1;
    (*(f32 *)((char *)(arg0) + (0xA0))) = temp_f1;
}
