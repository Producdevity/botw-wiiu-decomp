typedef int s32;

extern "C" int fn_03ca2fc4(void*, void*);

namespace {
struct Entry {
    unsigned char padding_0[0x2E8];
    s32 id;
};
}

extern "C" s32 fn_03ca938c(void *key, void *table) {
    Entry *entry;
    s32 result;

    result = -1;
    entry = (Entry *)fn_03ca2fc4(table, key);
    if (entry != 0) {
        result = entry->id;
    }
    return result;
}
