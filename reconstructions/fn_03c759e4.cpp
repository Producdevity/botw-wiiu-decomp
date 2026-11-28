typedef int s32;

extern "C" void fn_03c75928(void*, void*, void*, void*);

extern "C" s32 data_103e1e70;
extern "C" s32 data_103e1e7c;
extern "C" s32 data_103e1e88;
extern "C" s32 data_103e1e9c;
extern "C" s32 data_103e1eb0;
extern "C" s32 data_103e1ec4;
extern "C" s32 data_103e1ed8;
extern "C" s32 data_103e1f7c;

namespace {
struct Object {
    char padding_0[0x78];
    s32 value_78;
    s32 value_7C;
    char padding_80[8];
    s32 value_88;
    s32 value_8C;
};
}

extern "C" void fn_03c759e4(void *object) {
    fn_03c75928(object, &((Object *)object)->value_78, &data_103e1e88, &data_103e1e70);
    fn_03c75928(object, &((Object *)object)->value_88, &data_103e1eb0, &data_103e1ed8);
    fn_03c75928(object, &((Object *)object)->value_7C, &data_103e1e9c, &data_103e1e7c);
    fn_03c75928(object, &((Object *)object)->value_8C, &data_103e1ec4, &data_103e1f7c);
}
