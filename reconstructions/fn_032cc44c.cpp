#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048fddc;
extern "C" RuntimeTag data_10492cf0;
extern "C" const RuntimeVTable data_102a85c0;
extern "C" unsigned data_104874b0;
extern "C" RuntimeTag data_104874bc;
extern "C" const RuntimeVTable data_102a85b0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102a85a0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102a8590;

typedef Pointer<&data_1048fddc, &data_10492cf0, &data_102a85c0> Type0;
typedef Pointer<&data_104874b0, &data_104874bc, &data_102a85b0> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_102a85a0> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_102a8590> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_032cc44c(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
