extern "C" void fn_0434bff8(int, int, int, int);

namespace {
struct Object {
    unsigned char padding_0[0x2E8];
    unsigned char dirty;
};
}

extern "C" void fn_02e37038(int arg0, void *arg1, int arg2) {
    if (arg2 == 0 || static_cast<Object *>(arg1)->dirty != 0) {
        fn_0434bff8(reinterpret_cast<int>(arg1), arg0 + 0x3C, 0xC0, 0);
    }
}
