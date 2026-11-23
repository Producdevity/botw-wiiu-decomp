typedef float f32;

extern "C" void fn_023b720c(void*, float);
extern "C" void fn_023b7308(void*, float);
extern "C" void fn_0294f828(void*, void*);

extern "C" void fn_023b7664(void *arg0) {
    fn_023b720c(arg0, (*(f32 *)((char *)(arg0) + (0x94))));
    fn_023b7308(arg0, (*(f32 *)((char *)(arg0) + (0x98))));
    fn_0294f828((*(void **)((char *)(arg0) + (0))), (char *)arg0 + 0x58);
}
