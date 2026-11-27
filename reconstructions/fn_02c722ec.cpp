typedef int s32;

extern "C" int fn_02da25a8(void*, void*);

namespace {
struct Owner {
    char padding_0[0x914];
    void *key;
    char padding_918[0x19B8 - 0x918];
    s32 expected;
};
struct Holder {
    Owner *owner;
};
}

extern "C" s32 fn_02c722ec(void **holder) {
    Owner *owner;

    owner = ((Holder *)holder)->owner;
    return (owner->expected ^ fn_02da25a8(owner, owner->key)) == 0;
}
