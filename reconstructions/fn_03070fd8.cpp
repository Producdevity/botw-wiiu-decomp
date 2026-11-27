namespace {
struct Object {
    char padding_0[0x1C];
    char value;
};
}

extern "C" void* data_1046bdd8;

extern "C" void fn_03070fd8(int value) {
    if (data_1046bdd8 != 0) {
        ((Object*)data_1046bdd8)->value = value;
    }
}
