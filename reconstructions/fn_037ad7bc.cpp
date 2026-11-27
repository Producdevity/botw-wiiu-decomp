extern "C" bool fn_03797790(const void *, int);

namespace {
struct Object {
    char padding_0[0x43C];
    int state;
};
}

extern "C" unsigned char fn_037ad7bc(void *object) {
    int result = 1;

    if (fn_03797790(object, 0xA) == 0 && ((Object *)object)->state != 2) {
        result = 0;
    }
    return result;
}
