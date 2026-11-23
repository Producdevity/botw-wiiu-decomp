struct Body;

struct BodyOwner {
    unsigned char unknown_00[80];
    unsigned flags;
};

namespace {

struct ShapedBodyOwner : BodyOwner {
    unsigned char unknown_54[44];
    void* shape;
};

}

extern "C" const float data_102c9b24;
extern "C" Body* fn_0348cbf8(const BodyOwner* owner);
extern "C" float fn_034a0828(const Body* body);

extern "C" float fn_0348d008(const BodyOwner* base) {
    const ShapedBodyOwner* owner = static_cast<const ShapedBodyOwner*>(base);
    if (owner->shape == 0 || (owner->flags & 1)) return data_102c9b24;
    return fn_034a0828(fn_0348cbf8(owner));
}
