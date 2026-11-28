extern "C" float fn_02b6bce4(void*, void*);

namespace {
struct Object {
    void* owner;
    char padding_4[0x20];
    void** key;
    char padding_28[0x94];
    float* base;
    float* scale;
};
}

extern "C" float fn_028a6930(void* object)
{
    void*** keyRef = &((Object*)object)->key;
    float** scaleRef = &((Object*)object)->scale;
    float* base = ((Object*)object)->base;
    return fn_02b6bce4(((Object*)object)->owner, **keyRef) * **scaleRef + *base;
}
