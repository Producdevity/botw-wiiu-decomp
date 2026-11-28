struct Body;

struct BodyOwner {
    unsigned char unknown_00[80];
    unsigned flags;
};

extern "C" const float data_102c9b28;
extern "C" Body* fn_0348cbf8(const BodyOwner* owner);
extern "C" float fn_034a0680(const Body* body);

extern "C" float fn_0348cc80(const BodyOwner* owner) {
    bool uses_default = owner->flags & 1;
    if (uses_default)
        return data_102c9b28;
    return fn_034a0680(fn_0348cbf8(owner));
}
