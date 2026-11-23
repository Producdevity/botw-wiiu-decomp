typedef float f32;

extern "C" void fn_02074c58(void*);
extern "C" void fn_02074d90(void*, void*, float);

extern "C" f32 data_1000c968;

extern "C" void fn_02074fd0(void *arg0) {
    fn_02074c58(arg0);
    fn_02074d90(arg0, (char *)arg0 + 0x670, data_1000c968);
    (*(f32 *)((char *)(arg0) + (0x6AC))) = (f32) *(*(f32 **)((char *)(arg0) + (0x18)));
}
