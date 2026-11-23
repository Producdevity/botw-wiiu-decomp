#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10487cf8;
extern "C" RuntimeTag data_10487cfc;
extern "C" const RuntimeVTable data_1002d17c;
extern "C" unsigned data_10486d78;
extern "C" RuntimeTag data_10486e2c;
extern "C" const RuntimeVTable data_1002d16c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1002d15c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1002d14c;

typedef Pointer<&data_10487cf8, &data_10487cfc, &data_1002d17c> Type0;
typedef Pointer<&data_10486d78, &data_10486e2c, &data_1002d16c> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1002d15c> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1002d14c> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02148c34(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
