struct OwnedList;
struct OwnedListNode;
extern "C" void fn_03c0e68c(OwnedList *, OwnedListNode *);
extern "C" void fn_03c1596c(void *, void *);
extern "C" void fn_03c33f74(void*, int);

namespace {
struct Owner {
    char padding_0[0xC];
    char list[1];
};
struct Entry {
    char padding_0[0x2FC];
    char node[1];
};
}

extern "C" void fn_03c33fe8(void *owner, void *entry) {
    fn_03c0e68c((OwnedList *) ((Owner *) owner)->list, (OwnedListNode *) ((Entry *) entry)->node);
    if (entry != 0) {
        fn_03c33f74(entry, 2);
        fn_03c1596c(owner, entry);
    }
}
