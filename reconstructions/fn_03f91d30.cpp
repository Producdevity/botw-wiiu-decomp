extern "C" void* fn_0434c000(void* dst, int value, unsigned size);

extern "C" void* fn_03f91d30(void* object, int value, int index) {
    return fn_0434c000(object, value & 0xff, index);
}
