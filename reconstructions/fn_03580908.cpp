extern "C" const unsigned char data_10263a00[];

namespace {
struct Entry {
    char padding_0[0xC];
    unsigned int value_c;
};

struct Object {
    char padding_0[4];
    unsigned char *flag_4;
    char padding_8[0x48];
    unsigned char flag_50;
    char padding_51[0xB];
    Entry *entry_5c;
    unsigned int value_60;
};
}

extern "C" int fn_03580908(void *self)
{
    Object *object = (Object *)self;
    if (((object->entry_5c != 0 && object->entry_5c->value_c == object->value_60) ||
         *object->flag_4 != *data_10263a00) ||
        object->flag_50 != 0) {
        return 1;
    }
    return 0;
}
