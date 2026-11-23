extern "C" int fn_035fd888(void* manager, int id);
extern "C" void fn_035fed0c(void* manager, int id, int value);
extern "C" void* data_1047b054;

extern "C" void fn_027ca158(int* id) {
    void* manager = data_1047b054;
    if (manager != 0 && fn_035fd888(manager, *id) != 0) {
        fn_035fed0c(manager, *id, 0);
    }
}
