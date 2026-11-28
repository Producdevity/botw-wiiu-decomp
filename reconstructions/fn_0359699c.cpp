typedef int s32;

struct ListLink;
extern "C" void fn_0308e808(ListLink *);
extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

namespace {
struct List {
    unsigned char padding_0[0xC];
    s32 count;
    s32 linkOffset;
    unsigned char lock[4];
};

struct Link {
    s32 prev;
    s32 next;
};
}

extern "C" void fn_0359699c(void *list, void *item) {
    void *link;
    void *lock;

    if ((item != 0) && ((link = (char *)item + ((List *)list)->linkOffset, ((Link *)link)->next != 0) || (((Link *)link)->prev != 0))) {
        lock = ((List *)list)->lock;
        fn_030bb668(lock);
        fn_0308e808((ListLink *)((char *)item + ((List *)list)->linkOffset));
        ((List *)list)->count = ((List *)list)->count - 1;
        fn_030bb69c(lock);
    }
}
