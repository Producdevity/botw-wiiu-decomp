extern "C" void fn_02f67500(void*);
extern "C" unsigned int fn_0307bfa0();
extern "C" unsigned int fn_0307bfdc();

namespace {
struct Owner {
    char padding_0[0x2184];
    unsigned int first;
    unsigned int second;
    char padding_218c[4];
    signed char firstChanged;
    signed char secondChanged;
};
}

extern "C" void fn_02f67508(void* object) {
    Owner *owner = (Owner*)object;
    owner->firstChanged = 0;
    unsigned int first = fn_0307bfa0();
    if (first != owner->first) {
        owner->first = first;
        owner->firstChanged = 1;
    }
    owner->secondChanged = 0;
    unsigned int second = fn_0307bfdc();
    if (second != owner->second) {
        owner->second = second;
        owner->secondChanged = 1;
    }
    fn_02f67500(object);
}
