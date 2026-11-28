extern "C" void fn_0200ec40(void*);
extern "C" void fn_0201e7e4(void*);
extern "C" void fn_02b1ffe0(void*);

namespace {
struct Entry {
    char data[0x84];
};

struct Object {
    char padding_0[0xE8C];
    char block_e8c[1];
    char padding_e8d[0x1854 - 0xE8D];
    Entry entries[5];
};
}

extern "C" void fn_0200ed5c(void *object) {
    fn_0201e7e4(object);
    fn_02b1ffe0(((Object *)object)->block_e8c);
    fn_0200ec40(((Object *)object)->entries[0].data);
    fn_0200ec40(((Object *)object)->entries[1].data);
    fn_0200ec40(((Object *)object)->entries[2].data);
    fn_0200ec40(((Object *)object)->entries[3].data);
    fn_0200ec40(((Object *)object)->entries[4].data);
}
