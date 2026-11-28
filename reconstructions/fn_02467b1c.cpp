extern "C" int fn_02c1b6c0(void*, void*);
extern "C" void fn_030ea2cc(void*);
extern "C" float data_100bd0bc;

namespace {
struct Owner {
    char padding_0[0x260];
    float value;
};

struct Object {
    char padding_0[0x28];
    unsigned char flag;
};
}

inline int checkOwner(void* object)
{
    return fn_02c1b6c0(object, 0);
}

extern "C" void fn_02467b1c(void* self)
{
    Owner *owner = *(Owner **)self;
    if (owner->value < data_100bd0bc) {
        ((Object *)self)->flag = 1;
        if (checkOwner(*(void **)self) != 0) {
            fn_030ea2cc(self);
        }
    } else if (((Object *)self)->flag != 0 && checkOwner(owner) != 0) {
        fn_030ea2cc(self);
    }
}
