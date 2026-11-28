extern "C" void fn_02b3df00(void*);
extern "C" void fn_03467dbc(unsigned char*);
namespace {
typedef unsigned char *(*GetTarget)(void *);
struct Table {
    char padding_0[0x16C];
    GetTarget getTarget;
};
struct Owner {
    char padding_0[0xE8];
    Table *table;
};
struct Object {
    void *owner;
    char padding_4[0x2C];
    int value_30;
};
}

extern "C" void fn_02d097b8(void* self)
{
    void *owner = ((Object *)self)->owner;
    Table *table = ((Owner *)owner)->table;
    GetTarget *slot = &table->getTarget;
    unsigned char *target = (*slot)(owner);
    if (target != 0) {
        fn_03467dbc(target);
        fn_02b3df00(&((Object *)self)->value_30);
        ((Object *)self)->value_30 = 0;
    }
}
