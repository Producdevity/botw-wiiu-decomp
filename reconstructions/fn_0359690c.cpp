extern "C" void fn_0308e7e8(struct ListLink *, struct ListLink *);
extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

namespace {
struct Owner {
    char padding_0[4];
    char list;
    char padding_5[7];
    int count;
    int linkOffset;
    char lock;
};
struct Link {
    int first;
    int second;
};
}

extern "C" void fn_0359690c(void *object, int node) {
    Link *link;
    void *lock;
    if (node != 0) {
        link = (Link*)(node + ((Owner*)object)->linkOffset);
        if ((link->second == 0) && (link->first == 0)) {
            lock = &((Owner*)object)->lock;
            fn_030bb668(lock);
            fn_0308e7e8((ListLink *)&((Owner*)object)->list, (ListLink *)(node + ((Owner*)object)->linkOffset));
            ((Owner*)object)->count += 1;
            fn_030bb69c(lock);
        }
    }
}
