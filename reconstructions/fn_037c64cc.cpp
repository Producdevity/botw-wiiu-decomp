extern "C" void fn_033d01b4(void*, void*, int);
extern "C" void fn_037bf378(void*, void*, int);

extern "C" void *data_1046e110;

namespace {
struct Object {
    char padding_0[0x63C];
    void *owner;
};

struct Manager {
    char padding_0[0x24];
    void *owner;
};
}

extern "C" void fn_037c64cc(void *object) {
    void *owner = ((Object *)object)->owner;
    if (owner != 0) {
        fn_037bf378(owner, object, 1);
    }
    void *manager = ((Manager *)data_1046e110)->owner;
    if (manager != 0) {
        fn_033d01b4(manager, object, 1);
    }
}
