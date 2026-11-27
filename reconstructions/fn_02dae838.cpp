extern "C" void fn_037932f0(void*, void*);
extern "C" char * data_1047c258;

namespace {
struct Child {
    void **vtable;
};

struct Owner {
    char padding_0[0x38];
    Child *child;
};
}

extern "C" void fn_02dae838(void *owner) {
    char *name = data_1047c258;
    Child *child = ((Owner *)owner)->child;

    fn_037932f0(name, ((void *(*)(Child *))child->vtable[73])(child));
}
