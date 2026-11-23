typedef int s32;

extern "C" void fn_02034da8(void*, void*);

extern "C" void fn_02035664(s32 arg0, void *arg1) {
    fn_02034da8((void *)(arg0 + 0x24), arg1);
    fn_02034da8((void *)(arg0 + 0x70), arg1);
}
