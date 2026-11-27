extern "C" int fn_02e89ab4(void*);

namespace {
struct Stream {
    unsigned char padding_0[56];
    int position;
};
}

extern "C" int fn_02e8b72c(void* stream, int requested) {
    int position;
    unsigned int capacity;

    if (requested != 0) {
        capacity = fn_02e89ab4(stream);
        position = ((Stream *)stream)->position;
        if ((unsigned int) (position + requested) > capacity) {
            return capacity - position;
        }
    }
    return requested;
}
