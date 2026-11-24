struct Opaque_03799d7c;
extern "C" int fn_03277778(void* self);
extern "C" void* fn_03799d7c(Opaque_03799d7c* owner, unsigned int key);
extern "C" void fn_03195b04(void* target);
extern "C" void fn_0315c31c(void* object, int flag, int value);
extern "C" void fn_03197e04(void* target, int enable);

struct Opaque_03277840_Owner {
    unsigned char unknown_000[912];
    void* object_390;
};

struct Opaque_03277840 {
    Opaque_03277840_Owner* owner;
};

extern "C" void fn_03277840(Opaque_03277840* self) {
    if (fn_03277778(self) != 0) return;
    void* target = fn_03799d7c(reinterpret_cast<Opaque_03799d7c*>(self->owner), 0);
    if (target == 0) return;
    fn_03195b04(target);
    fn_0315c31c(self->owner->object_390, 1, 0);
    fn_03197e04(target, 1);
}
