extern "C" int data_10464064;
extern "C" int fn_02dbeffc(int);
extern "C" int fn_02dbf15c(int);

extern "C" int fn_02e3fe70(int, int* out) {
    int handle = data_10464064;

    if (handle != 0) {
        *out = fn_02dbf15c(handle);
        return fn_02dbeffc(handle);
    }
    return 0;
}
