typedef int s32;

extern "C" void fn_02034da8(void*, void*);

extern "C" void fn_02035664(s32 base, void *context) {
    fn_02034da8((void *)(base + 0x24), context);
    fn_02034da8((void *)(base + 0x70), context);
}
