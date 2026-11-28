typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" int fn_030cb1b4(void*, void*, void*);

namespace {
struct Triple {
    s32 first;
    s32 second;
    s32 third;
    s32 combined;
};
}

extern "C" void *fn_030ca808(void *object, s32 *first, s32 *second, s32 *third) {
    void *result;

    result = object;
    if ((result != 0) || (result = fn_0308e578(0x10U), ((result == 0) == 0))) {
        ((Triple *)result)->first = *first;
        ((Triple *)result)->second = *second;
        ((Triple *)result)->third = *third;
        ((Triple *)result)->combined = fn_030cb1b4(first, second, third);
    }
    return result;
}
