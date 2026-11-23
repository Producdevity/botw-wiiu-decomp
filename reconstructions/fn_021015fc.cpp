#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10487854;
extern "C" RuntimeTag data_10487858;
extern "C" const RuntimeVTable data_10021240;
extern "C" unsigned data_1048784c;
extern "C" RuntimeTag data_10487850;
extern "C" const RuntimeVTable data_10021230;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10021210;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10021200;

typedef Pointer<&data_10487854, &data_10487858, &data_10021240> Type0;
typedef Pointer<&data_1048784c, &data_10487850, &data_10021230> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10021210> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10021200> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_021015fc(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
