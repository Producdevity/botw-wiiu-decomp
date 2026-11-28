extern "C" void fn_0308e808(struct ListLink *);
extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);
extern "C" void fn_036d2f2c(void*, void*);
extern "C" void fn_036de330(void*, void*);

namespace {
struct Owner {
    char padding_0[0x50];
    char lock;
    char padding_51[0x1147];
    char list;
    char padding_1199[0x21A0 - 0x1199];
    int count;
    int linkOffset;
};
struct Node {
    char padding_0[0x2C];
    unsigned flags;
};
}

extern "C" void fn_036d2f94(void *object, void *node) {
    Owner *owner = (Owner*)object;
    void *lock = &owner->lock;
    fn_030bb668(lock);
    fn_0308e808((ListLink *)((char *)node + owner->linkOffset));
    owner->count -= 1;
    fn_036de330(&owner->list, node);
    ((Node*)node)->flags &= 0xBFFFFFFF;
    fn_036d2f2c(object, node);
    fn_030bb69c(lock);
}
