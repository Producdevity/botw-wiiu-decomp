extern "C" void fn_0344a37c(void*, float);
extern "C" void* fn_037966a8(void *);

extern "C" float data_100a80e8;
extern "C" float data_100a8120;

extern "C" void fn_023f062c(void **object, int active) {
    void *timer = fn_037966a8(*object);
    if (timer != 0) {
        if (active != 0) {
            fn_0344a37c(timer, data_100a8120);
            return;
        }
        fn_0344a37c(timer, data_100a80e8);
    }
}
