extern "C" unsigned fn_0348609c(int);
extern "C" void fn_03489294(void*, int);
extern "C" int fn_0379a17c(void*);

namespace {
struct Owner {
    char padding_0[0xF4];
    int target;
};
struct Object {
    Owner *owner;
    char padding_4[0x28];
    unsigned char active;
};
}

extern "C" void fn_020dad40(void* self)
{
    Owner *owner = ((Object *)self)->owner;
    int target = owner->target;
    if (target != 0 && fn_0348609c(target) != 1) {
        if (fn_0379a17c(owner) != 0) {
            ((Object *)self)->active = 1;
            return;
        }
        if (((Object *)self)->active != 0)
            fn_03489294((void*)target, 1);
    }
}
