extern "C" int fn_035ff2ac(void *);
extern "C" void *data_1047b054;

extern "C" int fn_02ec7f74(void) {
    void *manager = data_1047b054;
    int result = 1;
    if (manager != 0) {
        result = fn_035ff2ac(manager);
        if (result < 1) {
            result = 1;
        }
    }
    return result;
}
