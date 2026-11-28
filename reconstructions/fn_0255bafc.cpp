namespace {
struct Object {
    void *source;
    char padding_4[0x1C];
    void **slot_20;
    char padding_24[8];
    float *base_2c;
};
}

extern "C" float fn_02b6bce4(void *, void *);

extern "C" float fn_0255bafc(void *self)
{
    Object *object = (Object *)self;
    float *base = object->base_2c;
    void ***slot = &object->slot_20;
    float offset = fn_02b6bce4(object->source, **slot);
    return *base + offset;
}
