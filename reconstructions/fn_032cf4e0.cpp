#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048fdec;
extern "C" RuntimeTag data_10492d00;
extern "C" const RuntimeVTable data_102a8c2c;
extern "C" unsigned data_1048fde8;
extern "C" RuntimeTag data_10492cfc;
extern "C" const RuntimeVTable data_102a8c1c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102a8bfc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102a8bec;

typedef Pointer<&data_1048fdec, &data_10492d00, &data_102a8c2c> Type0;
typedef Pointer<&data_1048fde8, &data_10492cfc, &data_102a8c1c> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_102a8bfc> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_102a8bec> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_032cf4e0(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
