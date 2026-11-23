#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10488ba0;
extern "C" RuntimeTag data_10488ba4;
extern "C" const RuntimeVTable data_10054a5c;
extern "C" unsigned data_10488b98;
extern "C" RuntimeTag data_10488b9c;
extern "C" const RuntimeVTable data_10054a4c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10054a3c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10054a2c;

typedef Pointer<&data_10488ba0, &data_10488ba4, &data_10054a5c> Type0;
typedef Pointer<&data_10488b98, &data_10488b9c, &data_10054a4c> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10054a3c> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10054a2c> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0220e6ac(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
