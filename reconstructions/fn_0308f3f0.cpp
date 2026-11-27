extern "C" unsigned char data_10549628[];
extern "C" void fn_0308f090(void*);
namespace {
struct DelegateVtable { char padding_0[44]; int (*notify)(void*, int); };
struct DelegateBase { char padding_0[12]; DelegateVtable *vtable; };
struct Object { char padding_0[32]; DelegateBase *delegate; unsigned char enabled; };
}

extern "C" void fn_0308f3f0(void* object, int value) {
    DelegateBase *delegate;

    if (((Object *)object)->enabled && ((Object *)object)->delegate) {
        fn_0308f090(data_10549628);
        delegate = ((Object *)object)->delegate;
        delegate->vtable->notify(delegate, value);
    }
}
