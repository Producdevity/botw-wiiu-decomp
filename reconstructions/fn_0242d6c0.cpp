typedef int s32;
typedef float f32;

extern "C" f32 data_100b3374;

namespace {
struct Resource {
    unsigned char padding_0[0x58];
    s32 ready;
};

struct Holder {
    unsigned char padding_0[0x68];
    Resource *resource;
};

struct Object {
    unsigned char padding_0[0x2C];
    f32 value;
    unsigned char padding_30[0x84 - 0x30];
    Holder *holder;
};
}

extern "C" s32 fn_0242d6c0(void *object) {
    Holder *holder;
    Resource *resource;

    if (!(((Object *)object)->value > data_100b3374)) {
        holder = ((Object *)object)->holder;
        if (holder != 0) {
            resource = holder->resource;
            if ((resource != 0) && (resource->ready != 0)) {
                return 1;
            }
        }
    }
    return 0;
}
