extern "C" void fn_03c6fe5c(void*, int);

namespace {
struct Source {
    unsigned char padding_0[0x8C];
    unsigned char matrix[0x6C];
    float x;
    float y;
    float z;
};

struct Destination {
    unsigned char padding_0[0xC];
    float x;
    unsigned char padding_10[0xC];
    float y;
    unsigned char padding_20[0xC];
    float z;
};
}

extern "C" void fn_0209a578(void *arg0, void *arg1, void *arg2) {
    Source *source = static_cast<Source *>(arg0);
    Destination *destination = static_cast<Destination *>(arg1);
    fn_03c6fe5c(source->matrix, reinterpret_cast<int>(arg1));
    destination->x = source->x;
    destination->y = source->y;
    destination->z = source->z;
}
