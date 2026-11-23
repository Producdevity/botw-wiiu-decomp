typedef float f32;

extern "C" void fn_021d7df4(void*);
struct TimedState;
extern "C" void fn_0344a37c(void*, float);
extern "C" void* fn_037966a8(void *);

extern "C" void fn_021d9148(void *arg0) {
    struct TimedState *temp_r3;

    fn_021d7df4(arg0);
    temp_r3 = (TimedState *)(fn_037966a8((*(void **)((char *)(arg0) + (0)))));
    if (temp_r3 != 0) {
        (*(f32 *)((char *)(arg0) + (0x54))) = (f32) (*(f32 *)((char *)(temp_r3) + (0xE0)));
        fn_0344a37c(temp_r3, *(*(f32 **)((char *)(arg0) + (0x50))));
    }
}
