extern "C" float fn_02b6bce4(void *, void *);

namespace {
struct Object {
    void* owner;
    char padding_4[0x1C];
    void** key;
    float* base;
};
}

extern "C" float fn_02788038(void* object)
{
    
    return *((Object*)object)->base + fn_02b6bce4(((Object*)object)->owner, *((Object*)object)->key);
}
