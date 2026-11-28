typedef int s32;
typedef unsigned int u32;

extern "C" void fn_03a8431c(void*, int, void*);
extern "C" void fn_03a84518(void*, void*, void*, void*);
extern "C" void fn_03a8458c(void*);

extern "C" s32 data_1047ebc0;

extern "C" void fn_03af9780(u32 address, void *context) {
    fn_03a8431c((void *)(address + 0x20), 1, context);
    fn_03a84518((void *)(address + 0x20), 0, (void *)(data_1047ebc0 + 0x1914), 0);
    fn_03a8458c((void *)(address + 0x20));
}
