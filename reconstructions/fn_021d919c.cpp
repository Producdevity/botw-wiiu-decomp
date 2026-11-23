typedef int s32;
typedef float f32;

extern "C" void fn_021d7ec4(int);
struct TimedState;
extern "C" void fn_0344a37c(void*, float);
extern "C" void* fn_037966a8(void *);

extern "C" void fn_021d919c(s32 arg0) {
    struct TimedState *temp_r3;

    fn_021d7ec4(arg0);
    temp_r3 = (TimedState *)(fn_037966a8((*(void **)((char *)(arg0) + (0)))));
    if (temp_r3 != 0) {
        fn_0344a37c(temp_r3, (*(f32 *)((char *)(arg0) + (0x54))));
    }
}
