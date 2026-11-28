extern "C" bool fn_03070ebc();
extern "C" int fn_030770b4(int, void*);

namespace {
struct State {
    unsigned char padding_0[0x1B98];
    signed char value_1b98;
};
}

extern "C" int fn_030772a0(signed char value) {
    State* state;

    if (fn_03070ebc() != 0) {
        state = 0;
        if (fn_030770b4(0, &state) != 0) {
            state->value_1b98 = value;
            return 1;
        }
    }
    return 0;
}
