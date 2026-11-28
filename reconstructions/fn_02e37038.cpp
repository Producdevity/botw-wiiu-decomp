extern "C" void fn_0434bff8(int, int, int, int);

namespace {
struct Object {
    unsigned char padding_0[0x2E8];
    unsigned char dirty;
};
}

extern "C" void fn_02e37038(int base, void* object, int force) {
    if (force == 0 || static_cast<Object*>(object)->dirty != 0) {
        fn_0434bff8(reinterpret_cast<int>(object), base + 0x3C, 0xC0, 0);
    }
}
