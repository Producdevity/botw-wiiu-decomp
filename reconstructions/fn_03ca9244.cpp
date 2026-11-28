extern "C" int fn_03ca2fc4(void*, void*);

namespace {
struct Entry {
    char padding_0[0x388];
    int id;
};
}

extern "C" int fn_03ca9244(void *key, void *table) {
    Entry *entry;
    int result;

    result = -1;
    entry = (Entry *)fn_03ca2fc4(table, key);
    if (entry != 0) {
        result = entry->id;
    }
    return result;
}
