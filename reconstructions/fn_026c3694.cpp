typedef unsigned char u8;
typedef int s32;

extern "C" int fn_02b7a6d4(void*);

namespace {
struct Entry {
    char padding_0[0xD];
    u8 fallback;
    char padding_e;
    u8 primary;
};
}

extern "C" u8 fn_026c3694(void **object) {
    Entry *entry = (Entry *)fn_02b7a6d4(*object);
    u8 result;

    if (entry == 0) {
        return 0U;
    }
    result = entry->primary;
    if (result == 0) {
        result = entry->fallback;
    }
    return result;
}
