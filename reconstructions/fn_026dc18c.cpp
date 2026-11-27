typedef int s32;

extern "C" void fn_0339bd18(void*, void*);
extern "C" void fn_0339bd38(void*, void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_101154d8;

namespace {
struct Listener {
    void *owner;
    unsigned char padding_4[0x40];
    unsigned char first[8];
    unsigned char second[8];
};
}

extern "C" void fn_026dc18c(void **arg0) {
    void *owner;
    Listener *listener = (Listener *)arg0;

    owner = listener->owner;
    fn_0339bd18(owner, listener->first);
    fn_0339bd38(owner, listener->second);
    fn_037b8284(arg0, &data_101154d8, 0);
}
