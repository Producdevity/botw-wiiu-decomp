extern "C" char* data_1047bf14;

namespace {
struct Entry {
    char padding_0[0xC];
    unsigned bits;
};
struct Item {
    char padding_0[4];
    unsigned flags;
};
struct Manager {
    char padding_0[0x940];
    Entry *entry;
};
}

extern "C" int fn_036fc490(void *object) {
    Entry *entry;

    if (((((Item *)object)->flags & 1) ^ 1) != 0 ||
        (data_1047bf14 != 0 && (entry = ((Manager *)data_1047bf14)->entry, entry != 0) && ((entry->bits >> 3) & 1))) {
        return 0;
    }
    return 1;
}
