namespace {
struct Object {
    char padding_0[0x6C];
    int* table;
};
}

extern "C" int data_1054f62c;

extern "C" void fn_0339bc74(void* arg0) {
    if (arg0 != 0) {
        ((Object*)arg0)->table = &data_1054f62c;
    }
}
