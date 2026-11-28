typedef unsigned char u8;

struct OwnedList;
struct OwnedListNode;
extern "C" void fn_03c0e68c(OwnedList *, OwnedListNode *);

namespace {
struct Entry {
    char padding_0[0x201];
    u8 linked;
    char padding_202[2];
    char node[1];
};
}

extern "C" void fn_03c201fc(struct OwnedList *list, void *entry) {
    if (((Entry *) entry)->linked != 0) {
        fn_03c0e68c(list, (OwnedListNode *) ((Entry *) entry)->node);
        ((Entry *) entry)->linked = 0U;
    }
}
