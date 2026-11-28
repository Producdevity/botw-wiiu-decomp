typedef unsigned char u8;
typedef int s32;

extern "C" u8 fn_02dbef3c(void *);
extern "C" u8 fn_02dbef9c(void *);
extern "C" int fn_02dbeffc(int);
extern "C" int data_10464064;

extern "C" s32 fn_02a552cc(void) {
    s32 handle = data_10464064;
    if (handle != 0) {
        if (fn_02dbef3c((void *)handle) != 0) {
            return 1;
        }
        if (fn_02dbef9c((void *)handle) != 0) {
            return 2;
        }
        if (fn_02dbeffc(handle) != 0) {
            return 3;
        }
    }
    return 0;
}
