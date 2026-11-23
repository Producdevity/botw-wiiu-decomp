#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048d708;
extern "C" RuntimeTag data_1048d70c;
extern "C" const RuntimeVTable data_101479ac;
extern "C" unsigned data_1048c888;
extern "C" RuntimeTag data_1048c884;
extern "C" const RuntimeVTable data_1014799c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1014798c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1014797c;

typedef Pointer<&data_1048d708, &data_1048d70c, &data_101479ac> Type0;
typedef Pointer<&data_1048c888, &data_1048c884, &data_1014799c> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_1014798c> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1014797c> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0285b164(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
