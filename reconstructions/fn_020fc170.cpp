typedef float f32;

extern "C" void fn_020fbbfc(void*, float);
extern "C" void fn_020fbcf8(void*, float);
extern "C" void fn_0294f828(void*, void*);

extern "C" void fn_020fc170(void *arg0) {
    fn_020fbbfc(arg0, (*(f32 *)((char *)(arg0) + (0x78))));
    fn_020fbcf8(arg0, (*(f32 *)((char *)(arg0) + (0x7C))));
    fn_0294f828((*(void **)((char *)(arg0) + (0))), (char *)arg0 + 0x54);
}
