#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048c8ec;
extern "C" RuntimeTag data_1048c8f0;
extern "C" const RuntimeVTable data_1011da70;
extern "C" unsigned data_1048c0d0;
extern "C" RuntimeTag data_1048c0cc;
extern "C" const RuntimeVTable data_1011da50;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1011d9d8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1011d9c8;

typedef Pointer<&data_1048c8ec, &data_1048c8f0, &data_1011da70> Type0;
typedef Pointer<&data_1048c0d0, &data_1048c0cc, &data_1011da50> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_1011d9d8> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1011d9c8> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02722c74(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
