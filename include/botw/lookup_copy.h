#ifndef BOTW_LOOKUP_COPY_H
#define BOTW_LOOKUP_COPY_H

extern "C" void* fn_030ec10c(void* owner, const void* key, unsigned kind, bool mark);

namespace lookup_copy {

struct FloatTriple {
    float x;
    float y;
    float z;
};

typedef char FloatTripleSize[sizeof(FloatTriple) == 12 ? 1 : -1];

inline bool store_float_triple(void* owner, const FloatTriple& input, const void* key) {
    FloatTriple* output = static_cast<FloatTriple*>(fn_030ec10c(owner, key, 3, true));
    if (output) {
        output->x = input.x;
        output->y = input.y;
        output->z = input.z;
        return true;
    }
    return false;
}

}

#endif
