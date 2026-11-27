namespace {
struct ClassInfo {
    char padding_0[0x2BC];
    int *(*get_slot)(void *);
};
struct Owner {
    char padding_0[0xE8];
    ClassInfo *info;
};
}

extern "C" void fn_037b8284(void *, const void *, void *);
extern "C" int data_101394d8;

extern "C" void fn_027f9b40(void **arg0) {
    Owner *owner = (Owner *) *arg0;
    int *slot = owner->info->get_slot(owner);
    if (slot != 0) {
        *slot = 0;
    }
    fn_037b8284(arg0, &data_101394d8, 0);
}
