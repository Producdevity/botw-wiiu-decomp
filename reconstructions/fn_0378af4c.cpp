struct StatefulEntry {
    char pad0[0x54];
    unsigned char state;
};

struct EntryOwner {
    char pad0[0x6c];
    StatefulEntry* entry;
};

extern "C" StatefulEntry* fn_0378af4c(void* object) {
    StatefulEntry* entry = static_cast<EntryOwner*>(object)->entry;
    if (entry != 0 && entry->state != 3) {
        return entry;
    }
    return 0;
}
