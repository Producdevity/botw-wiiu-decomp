extern "C" void fn_031e20e8(int, int);
extern "C" int fn_031e2c10(int);
extern "C" int fn_031f6264(int);

namespace {
struct Object {
    unsigned char padding_0[0x175C4];
    int second;
    unsigned char padding_175C8[0x7C];
    int first;
};
}

extern "C" int fn_031cbc30(void* object) {
    int result;

    result = 1;
    if (fn_031f6264(((Object*)object)->first) == 0) {
        result = 0;
    }
    fn_031e20e8(((Object*)object)->second, 1);
    if (fn_031e2c10(((Object*)object)->second) == 0) {
        result = 0;
    }
    return result;
}
