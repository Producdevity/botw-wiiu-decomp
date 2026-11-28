namespace {
typedef int (*Method)(void *);

struct VirtualObject {
    char padding_0[0xC];
    void *const *vtable;
};

struct Binding {
    char padding_0[0x14];
    int result;
    void *source;
    int index;
};
}

extern "C" void fn_03840334(void *object, void *source, int index) {
    Binding *binding = (Binding *) object;
    binding->result = ((Method) ((VirtualObject *) source)->vtable[31])(source);
    binding->source = source;
    binding->index = index;
}
