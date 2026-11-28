namespace {
struct Vtable {
    char padding_0[0x2BC];
    int* (*getSlot)(void*);
};

struct Target {
    char padding_0[0xE8];
    Vtable* vtable;
};
}

extern "C" void fn_037b8284(void*, const void*, void*);

extern "C" int data_101394d0;

extern "C" void fn_027f9a70(void** object) {
    Target* target = (Target*)*object;
    int* slot = target->vtable->getSlot(target);
    if (slot != 0) {
        *slot = 0;
    }
    fn_037b8284(object, &data_101394d0, 0);
}
