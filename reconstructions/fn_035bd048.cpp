extern "C" float data_102e94d8;
extern "C" float data_102e95ec;

namespace {
struct Object {
    unsigned char padding_0[8];
    int flags;
};
}

extern "C" float fn_035bd048(void *self) {
    if (static_cast<Object *>(self)->flags & 0x220) {
        return data_102e95ec;
    }
    return data_102e94d8;
}
