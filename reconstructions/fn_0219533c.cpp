namespace {
struct Entry {
    unsigned char padding_0[0x6C];
    int state;
};
}

extern "C" int fn_03267614(void*);
extern "C" void fn_03267784(void*);

extern "C" void fn_0219533c(void *object) {
    fn_03267784(object);
    Entry *entry = (Entry *)fn_03267614(object);
    if (entry != 0) {
        entry->state = 2;
    }
}
