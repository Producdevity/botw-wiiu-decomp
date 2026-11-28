namespace {
struct Object {
    char padding_0[0xB];
    unsigned char flags;
    char padding_c[0x1DC];
    unsigned char flag_1e8;
    unsigned char flag_1e9;
};
}

extern "C" void fn_027233b4(void*);

extern "C" void fn_02635880(void* self)
{
    Object *object = (Object *)self;
    fn_027233b4(self);
    object->flag_1e9 = 0;
    object->flag_1e8 = 0;
    object->flags |= 4;
}
