extern "C" void fn_03c1e728(void*);
extern "C" void fn_03c1e9b0(void*);

namespace {
typedef int (*Callback)(void *, int, int);
struct Queue {
    char padding_0[4];
    int count;
    char* link;
};
struct Entry {
    char padding_0[0x370];
    int argument;
};
}

extern "C" void fn_03c2437c(void *object) {
    Callback callback;
    Entry *entry;
    char *link;
    while (((Queue*)object)->count != 0) {
        link = ((Queue*)object)->link;
        entry = (Entry*)(link - 0x4D4);
        fn_03c1e728(entry);
        callback = *(Callback *)(link - 0x168);
        if (callback != 0) {
            callback(entry, 1, entry->argument);
        }
        fn_03c1e9b0(entry);
    }
}
