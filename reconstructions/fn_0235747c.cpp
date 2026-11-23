#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10487364;
extern "C" RuntimeTag data_10487368;
extern "C" const RuntimeVTable data_1008d7e8;
extern "C" unsigned data_1048735c;
extern "C" RuntimeTag data_10487360;
extern "C" const RuntimeVTable data_1008d7d8;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1008d7c8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1008d7b8;

typedef Pointer<&data_10487364, &data_10487368, &data_1008d7e8> Type0;
typedef Pointer<&data_1048735c, &data_10487360, &data_1008d7d8> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1008d7c8> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1008d7b8> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0235747c(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
