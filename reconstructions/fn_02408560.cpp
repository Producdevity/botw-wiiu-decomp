typedef int s32;
typedef float f32;

extern "C" void fn_02b6001c(void*, void*, void*, void*, void*, float);
extern "C" void fn_02b604c4(void*, void*);

extern "C" s32 data_10549de8;

extern "C" void fn_02408560(void *arg0, void *arg1) {
    fn_02b6001c(arg1, 0, 0, 0, 0, *(*(f32 **)((char *)(arg0) + (0x24))));
    fn_02b604c4(arg1, &data_10549de8);
}
