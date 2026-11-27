extern "C" void fn_037a2038(int);

extern "C" int fn_03280b9c(int *slot) {
    int handle = *slot;

    if (handle == 0) {
        return 1;
    }
    fn_037a2038(handle);
    return 0;
}
