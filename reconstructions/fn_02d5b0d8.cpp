extern "C" void fn_0328d744(void*);
extern "C" void fn_037988ac(void*, void*);
extern "C" void fn_0379b9c0(void*);

namespace {
struct Object {
    char padding_0[0x1D94];
    char block_1d94[0x6A4];
    char block_2438[0x74];
    char block_24ac[1];
};
}

extern "C" int fn_02d5b0d8(void *object) {
    fn_037988ac(object, ((Object *)object)->block_2438);
    fn_037988ac(object, ((Object *)object)->block_24ac);
    fn_0379b9c0(object);
    fn_0328d744(((Object *)object)->block_1d94);
    return 1;
}
