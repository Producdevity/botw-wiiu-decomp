extern "C" void fn_02e2a248(void*, unsigned char);
extern "C" void fn_03070fd8(int);
extern "C" void* data_10467be0;
extern "C" void* data_1047c244;

namespace {
struct Global {
    char padding_0[0x113];
    signed char value;
};
}

extern "C" void fn_02e357b8(int reset) {
    if (reset != 0) {
        fn_03070fd8(0);
    }
    fn_02e2a248(data_10467be0, 1U);
    ((Global*)data_1047c244)->value = 5;
}
