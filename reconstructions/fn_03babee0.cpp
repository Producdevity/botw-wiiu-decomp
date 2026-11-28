extern "C" void fn_03ba9428(void*, void*);

namespace {
struct Object {
    char padding_0[0xD0];
    void *owner;
    char padding_d4[0xA0];
    int count_a;
    int count_b;
};
}

extern "C" void fn_03babee0(void *self) {
    void *owner;

    owner = static_cast<Object *>(self)->owner;
    if (owner != 0) {
        if (static_cast<Object *>(self)->count_b != 0 || static_cast<Object *>(self)->count_a != 0) {
            fn_03ba9428(owner, self);
        }
        static_cast<Object *>(self)->owner = 0;
    }
}
