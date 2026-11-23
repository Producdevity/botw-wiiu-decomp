typedef int s32;

extern "C" int fn_02dac17c(void*, void*);
extern "C" int fn_02dac324(void);
struct OutputView;
extern "C" void fn_030bebbc(void*);

extern "C" void *data_1046c928;

extern "C" void fn_02daa1ac(void) {
    s32 temp_r3;

    if (fn_02dac17c(data_1046c928, 0) != 0) {
        temp_r3 = fn_02dac324();
        if (temp_r3 != 0) {
            fn_030bebbc((struct OutputView *) temp_r3);
        }
    }
}
