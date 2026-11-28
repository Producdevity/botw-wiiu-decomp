extern "C" int fn_02c17e84(void*, int);

extern "C" int fn_02ae9668(void* object) {
    if (fn_02c17e84(object, 0x800) != 0 || fn_02c17e84(object, 0x20) != 0 || fn_02c17e84(object, 0x100) != 0 || fn_02c17e84(object, 0x80) != 0) {
        return 0;
    }
    return 1;
}
