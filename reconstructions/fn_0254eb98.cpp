#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048b8b0;
extern "C" RuntimeTag data_1048b8b4;
extern "C" const RuntimeVTable data_100dcb9c;
extern "C" unsigned data_1048b8ac;
extern "C" RuntimeTag data_1048b8a8;
extern "C" const RuntimeVTable data_100dcb8c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100dcb54;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100dcb44;

typedef Pointer<&data_1048b8b0, &data_1048b8b4, &data_100dcb9c> Type0;
typedef Pointer<&data_1048b8ac, &data_1048b8a8, &data_100dcb8c> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_100dcb54> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100dcb44> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0254eb98(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
