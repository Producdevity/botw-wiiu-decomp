extern "C" unsigned char data_102f8d20[];
extern "C" unsigned char data_102f8f48[];
extern "C" void* fn_0308e578(unsigned size);
extern "C" void fn_03a3e24c(void*);

namespace {
struct Object {
    unsigned char padding_0[12];
    const void *first;
    const void *second;
    unsigned char padding_14[0x8C];
    int value;
};
}

extern "C" void* fn_03603b10(void* object) {
    void* result;

    result = object;
    if ((result != 0) || (result = fn_0308e578(0xA4U), ((result == 0) == 0))) {
        fn_03a3e24c(result);
        ((Object*)result)->first = data_102f8d20;
        ((Object*)result)->second = data_102f8f48;
        ((Object*)result)->value = 0;
    }
    return result;
}
