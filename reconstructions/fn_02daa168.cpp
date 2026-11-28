extern "C" int fn_02dac250(void*, void*);
extern "C" int fn_02dac3ec(void);
struct OutputView;
extern "C" void fn_030bebbc(void*);

extern "C" void *data_1046c928;

extern "C" void fn_02daa168(void) {
    if (fn_02dac250(data_1046c928, 0) != 0) {
        int view = fn_02dac3ec();
        if (view != 0) {
            fn_030bebbc((struct OutputView *)view);
        }
    }
}
