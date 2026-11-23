extern "C" int fn_0294bf4c(int handle);
extern "C" int fn_0378db34();
extern "C" void fn_0378dc60(int value, int result);

extern "C" int fn_025ce31c(int* handle, int value) {
    int result = fn_0294bf4c(*handle);
    if (fn_0378db34() != 0) {
        fn_0378dc60(value, result);
        return 1;
    }
    return 0;
}
