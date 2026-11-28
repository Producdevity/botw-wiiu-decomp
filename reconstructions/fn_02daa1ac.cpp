extern "C" int fn_02dac17c(void*, void*);
extern "C" int fn_02dac324(void);
struct OutputView;
extern "C" void fn_030bebbc(void*);

extern "C" void *data_1046c928;

extern "C" void fn_02daa1ac(void) {
    if (fn_02dac17c(data_1046c928, 0) != 0) {
        int view = fn_02dac324();
        if (view != 0) {
            fn_030bebbc((struct OutputView *)view);
        }
    }
}
