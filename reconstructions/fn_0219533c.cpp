namespace {
struct Entry {
    unsigned char padding_0[0x6C];
    int state;
};
}

extern "C" int fn_03267614(void*);
extern "C" void fn_03267784(void*);

extern "C" void fn_0219533c(void *arg0) {
    fn_03267784(arg0);
    Entry *entry = (Entry *)fn_03267614(arg0);
    if (entry != 0) {
        entry->state = 2;
    }
}
