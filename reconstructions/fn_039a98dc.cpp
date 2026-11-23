typedef int s32;

extern "C" void fn_039ddb98(void*, void*);
extern "C" void fn_03a24bbc(void*, void*);

extern "C" void fn_039a98dc(s32 arg0, void *arg1) {
    fn_03a24bbc((void *)(arg0 + 0x40C0), arg1);
    fn_039ddb98((void *)(arg0 + 0x1240), arg1);
}
