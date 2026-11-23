#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048b290;
extern "C" RuntimeTag data_1048b28c;
extern "C" const RuntimeVTable data_100c95e8;
extern "C" unsigned data_1048b288;
extern "C" RuntimeTag data_1048b284;
extern "C" const RuntimeVTable data_100c95c8;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100c95b8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100c95a8;

typedef Pointer<&data_1048b290, &data_1048b28c, &data_100c95e8> Type0;
typedef Pointer<&data_1048b288, &data_1048b284, &data_100c95c8> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_100c95b8> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100c95a8> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_024cf680(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
