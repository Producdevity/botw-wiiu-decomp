namespace {
struct Callbacks {
    char padding_0[0x24];
    void (*finish)(void*);
};

struct Child {
    char padding_0[0xC];
    Callbacks* callbacks;
};

struct Owner;

struct OwnerVtable {
    char padding_0[0x1C];
    int (*notify)(void*, int);
};

struct Owner {
    char padding_0[0x74];
    OwnerVtable* vtable;
    char padding_78[0xC];
    Child* first;
    Child* second;
};
}

extern "C" int fn_03942768(void*);

extern "C" void fn_03942a38(void* arg0) {
    Owner* owner = (Owner*)arg0;
    Child* second = owner->second;
    Child* first = owner->first;
    fn_03942768(arg0);
    owner->vtable->notify(arg0, 3);
    second->callbacks->finish(second);
    first->callbacks->finish(first);
}
