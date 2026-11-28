extern "C" void fn_03485f68(void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" int data_10106754;

namespace {
struct Owner {
    char padding_0[0x24];
    void* second;
    void* first;
};
}

extern "C" void fn_02675b90(void *object) {
    void *first = ((Owner*)object)->first;
    if (first != 0) {
        fn_03485f68(first);
    }
    void *second = ((Owner*)object)->second;
    if (second != 0) {
        fn_03485f68(second);
    }
    fn_037b8284(object, &data_10106754, 0);
}
