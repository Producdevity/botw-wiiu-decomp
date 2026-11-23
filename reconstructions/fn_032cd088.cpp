#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048fde4;
extern "C" RuntimeTag data_10492cf8;
extern "C" const RuntimeVTable data_102a87b4;
extern "C" unsigned data_1048fde0;
extern "C" RuntimeTag data_10492cf4;
extern "C" const RuntimeVTable data_102a87a4;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102a8774;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102a8764;

typedef Pointer<&data_1048fde4, &data_10492cf8, &data_102a87b4> Type0;
typedef Pointer<&data_1048fde0, &data_10492cf4, &data_102a87a4> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_102a8774> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_102a8764> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_032cd088(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
