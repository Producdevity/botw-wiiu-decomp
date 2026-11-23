#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048a08c;
extern "C" RuntimeTag data_1048a090;
extern "C" const RuntimeVTable data_1008dea0;
extern "C" unsigned data_10487fcc;
extern "C" RuntimeTag data_10487fd0;
extern "C" const RuntimeVTable data_1008de90;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1008de80;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1008de70;

typedef Pointer<&data_1048a08c, &data_1048a090, &data_1008dea0> Type0;
typedef Pointer<&data_10487fcc, &data_10487fd0, &data_1008de90> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1008de80> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1008de70> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0235ae00(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
