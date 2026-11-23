#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10488fdc;
extern "C" RuntimeTag data_10488fe0;
extern "C" const RuntimeVTable data_10060a64;
extern "C" unsigned data_10488fd4;
extern "C" RuntimeTag data_10488fd8;
extern "C" const RuntimeVTable data_10060a54;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10060a34;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10060a24;

typedef Pointer<&data_10488fdc, &data_10488fe0, &data_10060a64> Type0;
typedef Pointer<&data_10488fd4, &data_10488fd8, &data_10060a54> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10060a34> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10060a24> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0224a0a8(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
