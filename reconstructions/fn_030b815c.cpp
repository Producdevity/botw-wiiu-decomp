extern "C" void fn_030b77d4(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" int data_1027a75d;

namespace {
struct Owner {
    char padding_0[0x28];
    void* defaultTarget;
    void* target;
};
}

extern "C" void *fn_030b815c(void *object, void *target) {
    struct {
        const void* first;
        const void* second;
    } pair;
    Owner *owner = (Owner*)object;
    void *previous = owner->target;
    if (target == 0) {
        target = owner->defaultTarget;
    }
    owner->target = target;
    pair.second = &data_10263910;
    pair.first = &data_1027a75d;
    fn_030b77d4(object, target, &pair.first);
    return previous;
}
