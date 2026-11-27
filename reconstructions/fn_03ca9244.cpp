typedef int s32;

extern "C" int fn_03ca2fc4(void*, void*);

namespace {
struct Entry {
    char padding_0[0x388];
    s32 id;
};
}

extern "C" s32 fn_03ca9244(void *arg0, void *arg1) {
    Entry *entry;
    s32 result;

    result = -1;
    entry = (Entry *)fn_03ca2fc4(arg1, arg0);
    if (entry != 0) {
        result = entry->id;
    }
    return result;
}
