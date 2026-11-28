typedef int s32;

extern "C" void fn_039ddb98(void*, void*);
extern "C" void fn_03a24bbc(void*, void*);

extern "C" void fn_039a98dc(s32 address, void *context) {
    fn_03a24bbc((void *)(address + 0x40C0), context);
    fn_039ddb98((void *)(address + 0x1240), context);
}
