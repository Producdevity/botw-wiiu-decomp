extern "C" void fn_0355ef3c(void*);
extern "C" void fn_0359a918(void*);

namespace {
struct Owner {
    char padding_0[0x1C];
    void *first;
    void *second;
};
}

extern "C" void fn_037dce28(void *object) {
    Owner *owner = (Owner *)object;

    if (owner->first != 0) {
        fn_0355ef3c(owner->first);
    }
    if (owner->second != 0) {
        fn_0359a918(owner->second);
    }
}
