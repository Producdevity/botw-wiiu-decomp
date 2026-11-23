#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048aeb4;
extern "C" RuntimeTag data_1048aeb8;
extern "C" const RuntimeVTable data_100b9230;
extern "C" unsigned data_10487e98;
extern "C" RuntimeTag data_10487e9c;
extern "C" const RuntimeVTable data_100b9220;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100b9210;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100b9200;

typedef Pointer<&data_1048aeb4, &data_1048aeb8, &data_100b9230> Type0;
typedef Pointer<&data_10487e98, &data_10487e9c, &data_100b9220> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_100b9210> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100b9200> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_024513f8(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
