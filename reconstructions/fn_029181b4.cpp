typedef int s32;

extern "C" void fn_0291f3f4(void*);
extern "C" int fn_0294bf4c(int);
extern "C" void fn_030ea2e0(void *);
extern "C" bool fn_0378da88(void *);

extern "C" void fn_029181b4(s32 *arg0) {
    if (fn_0378da88((void *)(fn_0294bf4c(*arg0))) == 0) {
        fn_030ea2e0(arg0);
    }
    fn_0291f3f4(arg0);
}
