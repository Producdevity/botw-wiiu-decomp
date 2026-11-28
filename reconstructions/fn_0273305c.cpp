extern "C" void fn_03177734(void*, void*);

namespace {
struct Owner {
    unsigned char padding_0[0x388];
    void *registry;
};

struct Holder {
    Owner *owner;
    unsigned char padding_4[0x80];
    unsigned char first[0x88];
    unsigned char second[1];
};
}

extern "C" void fn_0273305c(void **object) {
    void *registry = ((Holder *)object)->owner->registry;
    if (registry != 0) {
        fn_03177734(registry, ((Holder *)object)->first);
        fn_03177734(registry, ((Holder *)object)->second);
    }
}
