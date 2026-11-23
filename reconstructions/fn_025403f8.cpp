#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048b7d0;
extern "C" RuntimeTag data_1048b7cc;
extern "C" const RuntimeVTable data_100d9e8c;
extern "C" unsigned data_1048a784;
extern "C" RuntimeTag data_1048b7c8;
extern "C" const RuntimeVTable data_100d9e7c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100d9e6c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100d9e5c;

typedef Pointer<&data_1048b7d0, &data_1048b7cc, &data_100d9e8c> Type0;
typedef Pointer<&data_1048a784, &data_1048b7c8, &data_100d9e7c> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_100d9e6c> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100d9e5c> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_025403f8(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
