typedef int s32;

extern "C" void fn_03c92f98(void *);
extern "C" void fn_03cc48ac(void*);
extern "C" s32 fn_03cc71fc(void *);
extern "C" s32 fn_03cc7c98(void *);
extern "C" void fn_0434bda8(void *, void *);

namespace {
struct Object {
    char padding_0[4];
    void *owner;
    char padding_8[0x28];
    char first[0xFC];
    void *secondResource;
    char padding_130[0x14];
    void *firstResource;
    char second[1];
};
}

extern "C" s32 fn_03cc4d54(void *object) {
    s32 result = fn_03cc7c98(((Object *)object)->first);
    if (result == 0) {
        result = fn_03cc71fc(((Object *)object)->second);
        if (result == 0) {
            void *firstResource = ((Object *)object)->firstResource;
            if (firstResource != 0) {
                fn_0434bda8(((Object *)object)->owner, firstResource);
            }
            void *secondResource = ((Object *)object)->secondResource;
            if (secondResource != 0) {
                fn_0434bda8(((Object *)object)->owner, secondResource);
            }
            fn_03c92f98(object);
            fn_03cc48ac(object);
            result = 0;
        }
    }
    return result;
}
