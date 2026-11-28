typedef int s32;

extern "C" void fn_02e83c84(void*, void*);

extern "C" void fn_02fe1840(s32 object, void *context) {
    fn_02e83c84((void *)(object + 0x1BDC), context);
    fn_02e83c84((void *)(object + 0x1CA0), context);
}
