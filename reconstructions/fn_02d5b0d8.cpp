typedef int s32;

extern "C" void fn_0328d744(void*);
extern "C" void fn_037988ac(void*, void*);
extern "C" void fn_0379b9c0(void*);

extern "C" s32 fn_02d5b0d8(void *arg0) {
    fn_037988ac(arg0, (char *)arg0 + 0x2438);
    fn_037988ac(arg0, (char *)arg0 + 0x24AC);
    fn_0379b9c0(arg0);
    fn_0328d744((char *)arg0 + 0x1D94);
    return 1;
}
