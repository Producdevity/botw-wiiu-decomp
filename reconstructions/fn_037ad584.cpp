extern "C" int fn_037ac0c0(void*);
extern "C" void fn_038ca564(void*, void*);
extern "C" void fn_038ca88c(void*, void*, void*, void*);

namespace {
struct Config {
    char padding_0[0xA4];
    void* resource;
};

struct Object {
    char padding_0[0x54];
    unsigned char state;
    char padding_55[0x2DB];
    Config* config;
    char padding_334[0xE0];
    void* value_414;
    char padding_418[0x114];
    void* target;
};
}

extern "C" int fn_037ad584(void* self)
{
    Object* object = static_cast<Object*>(self);
    if (object->state == 3 || fn_037ac0c0(object) == 0) {
        return 0;
    }
    if (object->target != 0) {
        Config* config = object->config;
        fn_038ca564(object->target, config->resource);
        config = object->config;
        fn_038ca88c(object->target, config->resource, object->value_414, 0);
    }
    return 1;
}
