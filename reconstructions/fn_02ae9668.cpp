typedef int s32;

extern "C" int fn_02c17e84(void*, int);

extern "C" s32 fn_02ae9668(void *arg0) {
    if ((fn_02c17e84(arg0, 0x800) != 0) || (fn_02c17e84(arg0, 0x20) != 0) || (fn_02c17e84(arg0, 0x100) != 0) || (fn_02c17e84(arg0, 0x80) != 0)) {
        return 0;
    }
    return 1;
}
