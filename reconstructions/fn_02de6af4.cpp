#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10486448;
extern "C" RuntimeTag data_1048b62c;
extern "C" const RuntimeVTable data_101ee914;
extern "C" unsigned data_10486418;
extern "C" RuntimeTag data_1048b628;
extern "C" const RuntimeVTable data_101ee904;
extern "C" unsigned data_10486218;
extern "C" RuntimeTag data_1048b624;
extern "C" const RuntimeVTable data_101ee8f4;
extern "C" unsigned data_10486204;
extern "C" RuntimeTag data_1048b620;
extern "C" const RuntimeVTable data_101ee8e4;

typedef Pointer<&data_10486448, &data_1048b62c, &data_101ee914> Type0;
typedef Pointer<&data_10486418, &data_1048b628, &data_101ee904> Type1;
typedef Pointer<&data_10486218, &data_1048b624, &data_101ee8f4> Type2;
typedef Pointer<&data_10486204, &data_1048b620, &data_101ee8e4> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02de6af4(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
