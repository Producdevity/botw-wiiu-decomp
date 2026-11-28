namespace {
struct Owner {
    char padding_0[0x3D];
    unsigned char value_3d;
    char padding_3e[0x18A];
    void *slots[16];
};

struct Item {
    char padding_0[0x15D];
    unsigned char value_15d;
};
}

extern "C" void fn_03c40120(void* item, int index);

extern "C" void fn_03c40128(void* self, int index, void* item) {
    if (index > 15) {
        return;
    }
    ((Owner *)self)->slots[index] = item;
    fn_03c40120(item, index);
    ((Item *)item)->value_15d = ((Owner *)self)->value_3d;
}
