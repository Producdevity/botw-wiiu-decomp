typedef unsigned char u8;
typedef int s32;

struct SignedStateBytes;
extern "C" bool fn_03a3e4dc(const SignedStateBytes *);

namespace {
struct StateView {
    unsigned char padding_0[0x180];
    u8 valid;
};
}

extern "C" u8 fn_036066a4(struct SignedStateBytes *arg0) {
    s32 result;

    result = 0;
    if ((((StateView *)arg0)->valid != 0) && (fn_03a3e4dc(arg0) != 0)) {
        result = 1;
    }
    return result;
}
