extern "C" void fn_0344a078(void*);
extern "C" void fn_03485f68(void*);
extern "C" void* fn_037966a8(void *);

namespace {
struct Owner {
    unsigned char padding_0[0xF4];
    void *fallback;
};
}

extern "C" void fn_0339d7a0(void *owner) {
    void *fallback;

    void* link = fn_037966a8(owner);
    if (link != 0) {
        fn_0344a078(link);
        return;
    }
    fallback = ((Owner *)owner)->fallback;
    if (fallback != 0) {
        fn_03485f68(fallback);
    }
}
