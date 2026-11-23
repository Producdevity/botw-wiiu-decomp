typedef int s32;
typedef unsigned int u32;

extern "C" void fn_030a5188(void *, unsigned);
extern "C" void fn_030a5190(void*, void*);
extern "C" void fn_030a51c4(unsigned *, unsigned);

extern "C" s32 data_10549864;

extern "C" void fn_03bb6798(u32 *arg0, u32 arg1, void *arg2) {
    fn_030a5188(arg0, arg1);
    fn_030a5190(arg0, arg2);
    fn_030a51c4(arg0, (u32) &data_10549864);
}
