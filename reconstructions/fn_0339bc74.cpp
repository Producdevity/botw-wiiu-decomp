namespace {
struct Object {
    char padding_0[0x6C];
    int* table;
};
}

extern "C" int data_1054f62c;

extern "C" void fn_0339bc74(void* object) {
    if (object != 0) {
        ((Object*)object)->table = &data_1054f62c;
    }
}
