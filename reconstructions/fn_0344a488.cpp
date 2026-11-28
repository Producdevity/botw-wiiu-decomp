extern "C" int fn_0344a464(void*);

namespace {
struct Owner {
    char padding_0[0x44];
    int state;
};

struct Object {
    char padding_0[0x24];
    Owner *owner;
};
}

extern "C" unsigned char fn_0344a488(void* object)
{
    int result = 0;
    if (fn_0344a464(object) == 0) {
        Owner *owner = ((Object *)object)->owner;
        int state = owner->state;
        if (state == 1) {
            result = 1;
        }
    }
    return result;
}
