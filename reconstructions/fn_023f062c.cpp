typedef int s32;
typedef float f32;

struct TimedState;
extern "C" void fn_0344a37c(void*, float);
extern "C" void* fn_037966a8(void *);

extern "C" f32 data_100a80e8;
extern "C" f32 data_100a8120;

extern "C" void fn_023f062c(void **arg0, s32 arg1) {
    struct TimedState *temp_r3;

    temp_r3 = (TimedState *)(fn_037966a8(*arg0));
    if (temp_r3 != 0) {
        if (arg1 != 0) {
            fn_0344a37c(temp_r3, data_100a8120);
            return;
        }
        fn_0344a37c(temp_r3, data_100a80e8);
    }
}
