typedef int s32;

extern "C" int fn_02eaa20c(int);
extern "C" int fn_02eaa254(void*);
extern "C" void fn_02f60c1c(void*, void*);
extern "C" void fn_02f60cd4(void*, void*);
extern "C" void * data_104698f8;

extern "C" void fn_02f60d8c(void *arg0) {
    if (fn_02eaa20c((s32) data_104698f8) != 0) {
        fn_02f60c1c(arg0, 0);
        return;
    }
    if (fn_02eaa254(data_104698f8) != 0) {
        fn_02f60cd4(arg0, 0);
    }
}
