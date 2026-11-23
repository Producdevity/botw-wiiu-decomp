#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048ab24;
extern "C" RuntimeTag data_1048ab28;
extern "C" const RuntimeVTable data_100ae908;
extern "C" unsigned data_1048ab1c;
extern "C" RuntimeTag data_1048ab20;
extern "C" const RuntimeVTable data_100ae8f8;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100ae8e8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100ae8d8;

typedef Pointer<&data_1048ab24, &data_1048ab28, &data_100ae908> Type0;
typedef Pointer<&data_1048ab1c, &data_1048ab20, &data_100ae8f8> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_100ae8e8> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100ae8d8> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02418c70(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
